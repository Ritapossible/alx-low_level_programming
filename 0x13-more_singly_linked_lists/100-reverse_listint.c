/*
 * File: 100-reverse_listint.c
 * Auth: Augustine Rita
 */

#include "lists.h"

/**
 * reverse_listint - Reverses the linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevs = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prevs;
		prevs = *head;
		*head = next;
	}

	*head = prevs;

	return (*head);
}
