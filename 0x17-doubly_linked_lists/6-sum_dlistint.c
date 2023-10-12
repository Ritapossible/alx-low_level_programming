#include "lists.h"

/**
 * sum_dlistint - This is the sum of all nodes of doubly linkedlist.
 * @head: The doubly linkedlist.
 * Return: return the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int acutal_sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		acutal_sum += head->n;
		head = head->next;
	}

	return (acutal_sum);
}
