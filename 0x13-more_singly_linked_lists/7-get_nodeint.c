/*
 * File: 7-get_nodeint.c
 * Auth: Augustine Rita
 */

#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Retrieves the nth node of a linked list.
 * @head: A pointer to the head node of the linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);

}
