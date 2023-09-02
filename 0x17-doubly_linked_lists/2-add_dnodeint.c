#include "lists.h"

/**
* add_dnodeint -> Adds a new node at the beginning of a dlistint_t list
* @head: the head node.
* @n: data part of the node.
*
* Return: The address of the new element, NULL if failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new_node;

	new_node = MAL;
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	ptr = *head;

	if (ptr != NULL)
	{
		while (ptr->prev != NULL)
			ptr = ptr->prev;
	}

	new_node->next = ptr;

	if (ptr != NULL)
		ptr->prev = new_node;
	*head = new_node;

	return (new_node);
}
