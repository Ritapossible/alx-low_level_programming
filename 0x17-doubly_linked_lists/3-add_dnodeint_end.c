#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - This adds a new node at the end
  * of a doubly linked list.
  * @head: The head of the doubly linked list.
  * @n: The number to place in the new node.
  *
  * Return: The new head of the doubly linked list.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL, *n_node = NULL;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		n_node->next = NULL;
		n_node->prev = current;
		current->next = n_node;
		return (n_node);
	}

	n_node->next = *head;
	n_node->prev = NULL;
	*head = n_node;
	return (*head);
}
