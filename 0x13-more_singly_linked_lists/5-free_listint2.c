#include "lists.h"

/**
 * free_list2 -> frees a listint_t list.
 * @head: A pointer to the address of the head to the listint_t list
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;

	while (*head)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
