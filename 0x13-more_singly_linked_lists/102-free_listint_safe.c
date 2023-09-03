/*
 * File: 102-free_listint_safe.c
 * Auth: Augustine Rita
 */

#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Frees the listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the linked list.
 *
 * Return: Size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			*h = temp;
			l++;
		}
		else
		{
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
