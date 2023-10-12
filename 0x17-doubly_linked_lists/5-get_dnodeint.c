#include "lists.h"

/**
 * get_dnodeint_at_index - This gets nth node.
 * @head: The doubly linkedlist.
 * @index: The nth node to be access.
 * Return: The nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_actual = head;
	int nth = 0;

	while (nth++ != (int)index && new_actual)
		new_actual = new_actual->next;

	if (!new_actual)
		return (NULL);

	return (new_actual);
}
