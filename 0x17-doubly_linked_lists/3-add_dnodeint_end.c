#include "lists.h"

/**
* add_dnodeint_end -> Adds a new node at the end of a dlistint_t list
* @head: The head of the node.
* @n: The data part of the node.
*
* Return: A new element, otherwise NULL.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new_node;

	new_node = MAL;
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	ptr = *head;
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	else
		*head = new_node;
	new_node->prev = ptr;

	return (new_node);
}
