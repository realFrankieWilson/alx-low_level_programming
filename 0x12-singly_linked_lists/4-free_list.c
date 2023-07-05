#include "lists.h"

/**
 * free_list -> frees a list_t list.
 * @head: head to be freed
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
