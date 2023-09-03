/*
 * File: 103-find_loop.c
 * Auth: Augustine Rita
 */

#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: Address of the node where the loop starts, or NULL.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_pt = head;
	listint_t *fast_pt = head;

	if (!head)
		return (NULL);

	while (slow_pt && fast_pt && fast_pt->next)
	{
		fast_pt = fast_pt->next->next;
		slow_pt = slow_pt->next;
		if (fast_pt == slow_pt)
		{
			slow_pt = head;
			while (slow_pt != fast_pt)
			{
				slow_pt = slow_pt->next;
				fast_pt = fast_pt->next;
			}
			return (fast_pt);
		}
	}

	return (NULL);
}
