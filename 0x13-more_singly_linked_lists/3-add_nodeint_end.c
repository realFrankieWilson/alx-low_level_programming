#include "lists.h"

/**
 * add_nodeint_end -> A function that adds a new node at end of a listint_t
 * list.
 * @head: the new list to be added
 * @n: the number of nodes to be added
 *
 * Return: the address of the new element, NULL if otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *tmp;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	if (*head == NULL)
	{
		new_n->next = *head;
		*head = new_n;
	}
	else
	{
		new_n->next = NULL;
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_n;
	}
	return (new_n);
}
