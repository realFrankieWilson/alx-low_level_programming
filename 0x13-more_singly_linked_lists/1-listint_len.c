#include "lists.h"

/**
 * listint_len ->A function that prints the number of elements
 * in a linked listint_t list.
 * @h: the number of element to  be checked.
 *
 * Return: the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
