/*
 * File: 2-get_bit.c
 * Auth: Augustine Rita
 */

#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given
 * index
 * @n: unsigned long int input
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (n == 0 && index < 64)
		return (0);

	for (k = 0; k <= 63; n >>= 1, k++)
	{
		if (index == k)
			return (n & 1);
	}
	return (-1);
}
