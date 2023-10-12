#include "lists.h"

/**
 * add_dnodeint - This adds a new node at the beginning.
 * @head: The doubly linkedlist.
 * @n: The value of node.
 * Return: Always all the linkedlist.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
