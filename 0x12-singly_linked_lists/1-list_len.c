#include "lists.h"
/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
size_t count1 = 0;
while (h != NULL)

{
count1++;
h = h->next;
}
return (count1);
}
