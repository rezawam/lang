#include "../../include/lexer/scanner.hpp"

using namespace lexer;

bool Scanner::IsEnd() {
    return current >= source.length();
}

char Scanner::Advance() {
    return source[current++];
}

char Scanner::Match(char expected) {
    if (IsEnd()) return false;
    if (source[current] != expected) return false;
    current++;
    return true;
}

char Scanner::Peek() {
    if (IsEnd()) return '\0';
    return source[current];
}

char Scanner::PeekNext() {
    if (current + 1 >= source.length()) return '\0';
    return source[current + 1];
}

void Scanner::AddToken(TokenType type) {
    AddToken(type, std::monostate{});
}

void Scanner::AddToken(TokenType type, literal_type literal) {
    std::string text = source.substr(start, current);
    tokens.push_back(Token(type, text, literal, line));
}

void Scanner::GetString() {
    while (Peek() != '"' && !IsEnd()) {
      if (Peek() == '\n') line++;
      Advance();
    }

    if (IsEnd()) {
      std::cout << "Unterminated string\n";
      return;
    }

    Advance();

    std::string value = source.substr(start + 1, current - 1);
    AddToken(TokenType::STRING, value);
}

void Scanner::GetNumber() {
    while (std::isdigit(Peek())) 
        Advance();

    // Look for a fractional part
    if (Peek() == '.' && std::isdigit(PeekNext())) {
      Advance();
      while (std::isdigit(Peek())) 
        Advance();
    }

    AddToken(TokenType::NUMBER,
        std::stod((source.substr(start, current))));
}


void Scanner::ScanToken() {
    char c = Advance();
    switch (c) {
        case '(': AddToken(TokenType::LEFT_PAREN); break;
        case ')': AddToken(TokenType::RIGHT_PAREN); break;
        case '{': AddToken(TokenType::LEFT_BRACE); break;
        case '}': AddToken(TokenType::RIGHT_BRACE); break;
        case ',': AddToken(TokenType::COMMA); break;
        case '.': AddToken(TokenType::DOT); break;
        case '-': AddToken(TokenType::MINUS); break;
        case '+': AddToken(TokenType::PLUS); break;
        case ';': AddToken(TokenType::SEMICOLON); break;
        case '*': AddToken(TokenType::STAR); break; 

        case '!':
            AddToken(Match('=') ? TokenType::BANG_EQUAL : TokenType::BANG);
            break;
        case '=':
            AddToken(Match('=') ? TokenType::EQUAL_EQUAL : TokenType::EQUAL);
            break;
        case '<':
            AddToken(Match('=') ? TokenType::LESS_EQUAL : TokenType::LESS);
            break;
        case '>':
            AddToken(Match('=') ? TokenType::GREATER_EQUAL : TokenType::GREATER);
            break;
        case '/':
            if (Match('/')) {
                while (Peek() != '\n' && !IsEnd()) Advance();
            } else {
                AddToken(TokenType::SLASH);
            }
            break;

        case ' ': break;
        case '\r': break;
        case '\t': break;
        case '\n':
            line++;
            break;

        case '"': GetString(); break;

        default: 
            if (std::isdigit(c))
                GetNumber();
            else
                std::cout << "Unexpected symbol: " << c << "\n"; 
            break;
    }

}

std::vector<Token> Scanner::ScanTokens() {
    while (!IsEnd()) {
        start = current;
        ScanToken();
    }
    tokens.push_back(Token(TokenType::EOFI, "", std::monostate{}, line));
    return tokens;
}