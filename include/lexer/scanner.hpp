#pragma once

#include "token.hpp"

#include <vector>
#include <optional>

namespace lexer {

class Scanner {
public:
    Scanner(std::string source_) : source(source_) {};
    std::vector<Token> ScanTokens();

private:
    std::string source;
    std::vector<Token> tokens;
    int start = 0;
    int current = 0;
    int line = 1;

    bool IsEnd();
    void ScanToken();
    char Advance();
    char Match(char expected);
    char Peek();
    char PeekNext();
    void GetString();
    void GetNumber();

    void AddToken(lexer::TokenType type);
    void AddToken(lexer::TokenType type, lexer::literal_type literal);
};

} 