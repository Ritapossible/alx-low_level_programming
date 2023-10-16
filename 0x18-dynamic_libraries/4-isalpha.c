/*
 * File: 4-isalpha.c
 * Auth: Augustine Rita
 */

#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	    (c >= 65 && c <= 97))
		return (1);
	else
		return (0);
}
