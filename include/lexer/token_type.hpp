#pragma once

#include <iostream>
#include <map>

namespace lexer {

enum class TokenType {
  // Single-character tokens
  LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
  COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

  // One or two character tokens
  BANG, BANG_EQUAL,
  EQUAL, EQUAL_EQUAL,
  GREATER, GREATER_EQUAL,
  LESS, LESS_EQUAL,

  // Literals
  IDENTIFIER, STRING, NUMBER,

  // Keywords
  AND, OR, IF, ELSE, TRUE, FALSE, FUNC, FOR, WHILE,
  PRINT, RETURN, VAR,

  EOFI // Do not be confused with "stdio.h" EOF
};

inline std::map<lexer::TokenType, std::string> token_to_string {
    {lexer::TokenType::LEFT_PAREN, "LEFT_PAREN"},
    {lexer::TokenType::RIGHT_PAREN, "RIGHT_PAREN"},
    {lexer::TokenType::LEFT_BRACE, "LEFT_BRACE"},
    {lexer::TokenType::RIGHT_BRACE, "RIGHT_BRACE"},
    {lexer::TokenType::COMMA, "COMMA"},
    {lexer::TokenType::DOT, "DOT"},
    {lexer::TokenType::MINUS, "MINUS"},
    {lexer::TokenType::PLUS, "PLUS"},
    {lexer::TokenType::SEMICOLON, "SEMICOLON"},
    {lexer::TokenType::SLASH, "SLASH"},
    {lexer::TokenType::STAR, "STAR"},
    {lexer::TokenType::BANG, "BANG"},
    {lexer::TokenType::BANG_EQUAL, "BANG_EQUAL"},
    {lexer::TokenType::EQUAL, "EQUAL"},
    {lexer::TokenType::EQUAL_EQUAL, "EQUAL_EQUAL"},
    {lexer::TokenType::GREATER, "GREATER"},
    {lexer::TokenType::GREATER_EQUAL, "GREATER_EQUAL"},
    {lexer::TokenType::LESS, "LESS"},
    {lexer::TokenType::LESS_EQUAL, "LESS_EQUAL"},
    {lexer::TokenType::IDENTIFIER, "IDENTIFIER"},
    {lexer::TokenType::STRING, "STRING"},
    {lexer::TokenType::NUMBER, "NUMBER"},
    {lexer::TokenType::AND, "AND"},
    {lexer::TokenType::OR, "OR"},
    {lexer::TokenType::IF, "IF"},
    {lexer::TokenType::ELSE, "ELSE"},
    {lexer::TokenType::TRUE, "TRUE"},
    {lexer::TokenType::FALSE, "FALSE"},
    {lexer::TokenType::FUNC, "FUNC"},
    {lexer::TokenType::FOR, "FOR"},
    {lexer::TokenType::WHILE, "WHILE"},
    {lexer::TokenType::PRINT, "PRINT"},
    {lexer::TokenType::RETURN, "RETURN"},
    {lexer::TokenType::VAR, "VAR"},
    {lexer::TokenType::EOFI, "EOFI"}
};

inline std::ostream& operator<<(std::ostream& os, const TokenType t) {
    if (token_to_string.find(t) == token_to_string.end())
        os << "UNKNOWN_SYMBOL";
    else
        os << token_to_string.find(t)->second;
    return os;
}

}




