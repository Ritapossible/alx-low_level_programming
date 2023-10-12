#include "lists.h"

/**
 * free_dlistint - This frees a dlistint_t list.
 * @head: The doubly linkedlist.
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_actual = head;

	while (head)
	{
		new_actual = head;
		head = new_actual->next;
		free(new_actual);
	}
}
