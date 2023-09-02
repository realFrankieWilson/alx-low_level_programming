#include "lists.h"

/**
* print_dlistint -> Prints all the element of a dlistint_t list.
* @h: The head pointer
*
* Return: The number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
