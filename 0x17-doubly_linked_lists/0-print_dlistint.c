#include "lists.h"

/**
 * print_dlistint - This prints all the elements of a dlistint_t list.
 * @h: The doubly linkedlist.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_number = 0;

	while (h)
	{
		printf("%i\n", h->n);
		nodes_number++;
		h = h->next;
	}

	return (nodes_number);
}
