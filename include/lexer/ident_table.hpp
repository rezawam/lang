// #pragma once

// #include <lexer/token_type.hpp>

// #include <string>
// #include <map>

// #include <fmt/core.h>

// namespace lexer {

// class IdentTable {
// public:
//     IdentTable() {
//     Populate();
//   }

//   // Use-of-string-view-for-map-lookup
//   // https://stackoverflow.com/questions/35525777

//   TokenType LookupWord(const std::string_view identifier) {
//     auto search = map_.find(std::string(identifier));
//     if (search != map_.end())
//       return search->second;
//   }

//  private:
//   void Populate() {
//     map_.insert({"(",          TokenType::LEFT_PAREN});
//     map_.insert({")",          TokenType::RIGHT_PAREN});
//     map_.insert({"{",          TokenType::LEFT_BRACE});
//     map_.insert({"}",          TokenType::RIGHT_BRACE});
//     map_.insert({",",          TokenType::COMMA});
//     map_.insert({".",          TokenType::DOT});
//     map_.insert({"-",          TokenType::MINUS});
//     map_.insert({"+",          TokenType::PLUS});
//     map_.insert({";",          TokenType::SEMICOLON});
//     map_.insert({"/",          TokenType::SLASH});
//     map_.insert({"*",          TokenType::STAR});

//     map_.insert({"=",          TokenType::BANG});
//     map_.insert({"=",          TokenType::BANG_EQUAL});
//     map_.insert({"=",          TokenType::EQUAL});
//     map_.insert({"==",         TokenType::EQUAL_EQUAL});
//     map_.insert({">",          TokenType::GREATER});
//     map_.insert({">=",         TokenType::GREATER_EQUAL});
//     map_.insert({"<",          TokenType::LESS});
//     map_.insert({"<=",         TokenType::LESS_EQUAL});

//     map_.insert({"else",       TokenType::ELSE});
//     map_.insert({"false",      TokenType::FALSE});
//     map_.insert({"fun",        TokenType::FUNC});
//     map_.insert({"for",        TokenType::FOR});
//     map_.insert({"if",         TokenType::IF});
//     map_.insert({"return",     TokenType::RETURN});
//     map_.insert({"true",       TokenType::TRUE});
//     map_.insert({"var",        TokenType::VAR});
//     map_.insert({"while",      TokenType::WHILE});
//   }

//  private:
//   // What-are-transparent-comparators
//   // https://stackoverflow.com/questions/20317413

//   std::map<std::string, TokenType, std::less<>> map_;
// };

// }  // namespace lex