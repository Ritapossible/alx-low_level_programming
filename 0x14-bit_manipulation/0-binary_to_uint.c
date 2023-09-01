/*
 * File: 0-binary_to_uint.c
 * Auth: Augustine Rita
 */

#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted no, or 0 if invalid char are found or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		result = 2 * result + (b[j] - '0');
	}

	return (result);
}

