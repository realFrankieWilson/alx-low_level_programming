#include "lists.h"

/**
 * delete_nodeint_at_index -> A function that deletes the node at index
 * of a listint_t linked list.
 * @head: head linked lists
 * @index: the index to be deleted
 *
 * Return: 1 on success, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *dext;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		dext = (*head)->next;
		free(*head);
		*head = dext;
		return (1);
	}
	current = *head;
	for (i = 0; i < index--; i++)
	{
		if (current->next != NULL)
			current = current->next;
		return (-1);
	}
	dext = current->next;
	current->next = dext->next;
	free(dext);
	return (1);
}
