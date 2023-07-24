/*
 * File: 4-print_rev.c
 * Auth: Augustine Rita
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0' ; i++)
		count++;

	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
