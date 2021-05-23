// Copyright (C) 2021 Robert Coffey
// All rights reserved

#ifndef LEXER_H
#define LEXER_H

#include "token.h"

/**
 * Convert a string into a sequence of tokens.
 *
 * @param str	String to be converted into tokens
 *
 * @return rtb_buffer_t containing tokens
 **/
rtb_buffer_t *string_to_tokens(char *str);

#endif	// LEXER_H
