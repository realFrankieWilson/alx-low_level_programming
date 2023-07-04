#include "lists.h"

/**
 * print_list -> prints all the elements of a list
 * @h: name of the list
 *
 * Return: the node's num.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}
	return (i);
}
