/*
 * File: 101-print_listint_safe.c
 * Auth: Augustine Rita
 */

#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely, handling loops.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (count);
}
