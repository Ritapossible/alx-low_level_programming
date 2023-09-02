/*
 * File: 8-sum_listint.c
 * Auth: Augustine Rita
 */

#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - The Sum all of the data (n) in a list.
 * @head: Address of the first node of the list.
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	int summ = 0;

	while (head != NULL)
	{
		summ += head->n;
		head = head->next;
	}
	return (summ);
}
