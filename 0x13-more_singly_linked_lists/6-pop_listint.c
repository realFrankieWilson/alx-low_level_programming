#include "lists.h"

/**
 * pop_listint -> A function that deletes the head node of a list
 * @head: The head of the linked list
 *
 * Return: head note.
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;

	int ret;

	if (*head == NULL)
		return (0);

	tp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tp);

	return (ret);
}
