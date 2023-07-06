#include "lists.h"

/**
 * get_nodeint_at_index -> A function that returns the nth node of a
 * linked list.
 * @index: the index node starting at 0.
 * @head: head nodes.
 *
 * Return: nth node or NULL if otherwise.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (head != NULL)
		{
			if (i == index)
				return (head);
			head = head->next;
			i++;
		}
	}
	return (NULL);
}
