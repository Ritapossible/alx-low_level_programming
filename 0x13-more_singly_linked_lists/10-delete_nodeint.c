/*
 * File: 10-delete_nodeint.c
 * Auth: Augustine Rita
 */

#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node at the given positiion.
 * @head: The First node address.
 * @index: Position of the node to be deleted.
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
