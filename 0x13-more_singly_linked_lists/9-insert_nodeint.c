/*
 * File: 9-insert_nodeint.c
 * Auth: Augustine Rita
 */

#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be inserted.
 * @n: The value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node1, *temp;
	unsigned int j = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	temp = *head;
	for (; j < idx - 1 && temp != NULL; j++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	}
	new_node1 = malloc(sizeof(listint_t));
	if (new_node1 == NULL)
		return (NULL);
	new_node1->n = n;
	if (idx == 0)
	{
		new_node1->next = *head;
		*head = new_node1;
		return (new_node1);
	}
	new_node1->next = temp->next;
	temp->next = new_node1;
	return (new_node1);
}
