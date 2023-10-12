#include "lists.h"

/**
 * insert_dnodeint_at_index - This inserts a new node at a given position.
 * @h: The doubly linkedlist.
 * @idx: The index to insert new_node.
 * @n: The value for new_node.
 * Return: The address of new_node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_actual = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int cnt;

	if (!h || !new_node)
		return (NULL);

	new_node->n = n;

	if (!(*h))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (cnt = 0; new_actual; cnt++)
	{
		if (cnt == idx)
		{
			new_node->prev = new_actual->prev;
			(new_actual->prev)->next = new_node;
			new_actual->prev = new_node;
			new_node->next = new_actual;
			return (new_node);
		}
		else if (!new_actual->next && 1 + cnt == idx)
			return (add_dnodeint_end(h, n));
		new_actual = new_actual->next;
	}
	return (NULL);
}
