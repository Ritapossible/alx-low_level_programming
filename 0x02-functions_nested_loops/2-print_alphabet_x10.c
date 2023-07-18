/*
 * File: 2-print_alphabet_x10.c
 * Auth: Augustine Rita
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char low;

	while (count++ <= 9)
	{
		for (low = 'a'; low <= 'z'; low++)
			_putchar(low);
		_putchar('\n');
	}
}
