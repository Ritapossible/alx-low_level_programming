/*
 * File: 0-print_listint.c
 * Auth: Augustine Rita
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count_1 = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_1++;
	}
	return (count_1);
}
