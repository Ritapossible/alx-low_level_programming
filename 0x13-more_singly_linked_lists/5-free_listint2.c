/*
 * File: 5-free_listint2.c
 * Auth: Augustine Rita
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
