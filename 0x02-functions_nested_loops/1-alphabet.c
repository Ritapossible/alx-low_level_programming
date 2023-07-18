/*
 * File: 1-alphabet.c
 * Auth: Augustine Rita
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);

	_putchar('\n');
}
