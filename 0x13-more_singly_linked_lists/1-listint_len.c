/*
 * File: 1-listint_len.c
 * Auth: Augustine Rita
 */

#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: A pointer to the head of the list.
 * Return: The number of elements in the list.
*/

size_t listint_len(const listint_t *h)
{
	size_t count_1 = 0;

	while (h != NULL)
	{
		h = h->next;
		count_1++;
	}
	return (count_1);
}
