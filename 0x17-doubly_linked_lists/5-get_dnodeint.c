#include "lists.h"

/**
* get_dnodeint_at_index -> Gets the node at a specific index
* @head: The head of the node
* @index: The index to find the doubly linked list
*
* Return: node at index.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (head)
		while (tmp != NULL)
		{
			if (i == index)
				return (tmp);
			tmp = tmp->next;
			i++;
		}
	return (NULL);
}
