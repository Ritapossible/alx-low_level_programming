#include "lists.h"

/**
 * dlistint_len - This return length of linkedlist.
 * @h: The doubly linkedlist
 * Return: The number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
		h = h->next, len++;

	return (len);
}
