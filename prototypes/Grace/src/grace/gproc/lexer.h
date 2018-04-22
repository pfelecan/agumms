
#pragma once

#include <string>

#include "types.h"

class LexerException : public PosException { using PosException::PosException; };

class Lexer {
public:
    Lexer(const std::wstring& text);
    Token::Token next();

private:
    void scan_integer_();
    Token::Token tokenize_alpha_();
    Token::Token tokenize_comment_();
    Token::Token tokenize_number_();

    unsigned pos_;
    const std::wstring& text_;
    size_t text_length_;
};
