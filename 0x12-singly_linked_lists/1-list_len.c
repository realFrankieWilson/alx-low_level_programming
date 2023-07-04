#include "lists.h"

/**
 * list_len -> returns the number of elements in a linked list.
 * @h: the number of nodes.
 *
 * Return: number of elements in a list.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}
