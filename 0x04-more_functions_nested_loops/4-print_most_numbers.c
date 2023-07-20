/*
 * File: 4-print_most_numbers.c
 * Auth: Augustine Rita
 */

#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if (j != 2 && j != 4)
			_putchar((j % 10) + '0');
	}

	_putchar('\n');
}
