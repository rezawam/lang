#pragma once

#include "token_type.hpp"

#include <variant>
#include <string>

namespace lexer {

typedef std::variant<std::monostate, int, double, std::string> literal_type;

struct Token {
  lexer::TokenType type;
  std::string lexeme;
  literal_type literal;
  int line; 

  Token(TokenType type_, std::string lexeme_, literal_type literal_, int line_) 
    : type(type_), lexeme(lexeme_), literal(literal_), line(line_) {}
};

}