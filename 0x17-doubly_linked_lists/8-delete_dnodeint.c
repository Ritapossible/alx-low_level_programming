#include "lists.h"

/**
 * delete_dnodeint_at_index - This deletes the node at index.
 * @head: The doubly linkedlist.
 * @index: The index to remove node.
 * Return: 1 if removed, -1 if fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_actual = *head;
	unsigned int count;

	if (!head || !new_actual)
		return (-1);

	if (index == 0)
	{
		new_actual = new_actual->next;
		free(*head);
		*head = new_actual;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (count = 0; new_actual; count++)
	{
		if (count == index)
		{
			if (new_actual->next)
			{
				(new_actual->prev)->next = new_actual->next;
				(new_actual->next)->prev = new_actual->prev;
				free(new_actual);
				return (1);
			}
			else
			{
				(new_actual->prev)->next = NULL;
				free(new_actual);
				return (1);
			}
		}
		new_actual = new_actual->next;
	}

	return (-1);
}
