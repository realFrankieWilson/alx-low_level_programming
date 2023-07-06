#include "lists.h"

/**
 * free_listint -> Frees listint_t list.
 * @head: the list to be released
 *
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
	free(head);
}
