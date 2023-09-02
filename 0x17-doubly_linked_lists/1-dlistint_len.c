#include "lists.h"

/**
* dlistint_len -> Function returns the linked dlistint_t list.
* @h: the head node.
*
* Return: The number of elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}