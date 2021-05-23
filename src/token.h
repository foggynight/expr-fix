// Copyright (C) 2021 Robert Coffey
// Released under the GPLv2 license

#ifndef TOKEN_H
#define TOKEN_H

#define IS_NUMBER	(unsigned char)(1)
#define IS_OPERATOR	(unsigned char)(1 << 1)

typedef struct token {
	char *str;
	unsigned char flags;
} token_t;

#endif	// TOKEN_H
