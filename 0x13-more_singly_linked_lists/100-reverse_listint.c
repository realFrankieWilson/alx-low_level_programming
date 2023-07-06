#include "lists.h"

/**
 * reverse_listint -> a function that reverse a listint_t liked list
 * @head: head of the list
 *
 * Return: the number of nodes
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head != NULL || *head != NULL)
		if ((*head)->next == NULL)
			return (*head);
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
