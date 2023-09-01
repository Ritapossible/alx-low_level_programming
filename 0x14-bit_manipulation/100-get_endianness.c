/*
 * File: 100-get_endianness.c
 * Auth: Augustine Rita
 */

#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int k;
	char *c;

	k = 1;
	c = (char *) &k;

	return ((int)*c);
}
