/*
 * File: 6-pop_listint.c
 * Auth: Augustine Rita
 */

#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: A pointer to the pointer to the head node.
 *
 * Return: The data of the popped head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}

