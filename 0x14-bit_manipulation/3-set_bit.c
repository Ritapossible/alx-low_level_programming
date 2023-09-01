/*
 * File: 3-set_bit.c
 * Auth: Augustine Rita
 */

#include "main.h"

/**
 * set_bit - sets the value of the bit to 1
 * at the given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, -1 if it didn't
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	*n = (*n | k);

	return (1);
}
