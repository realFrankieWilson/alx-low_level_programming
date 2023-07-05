#include "lists.h"

/**
 * add_node_end -> A function that adds a node to the end of the linked lists.
 * @head: pointer to a list_t pointer that points the head struct.
 * @str: string to add as a node.
 *
 * Return: pointer to the new element of list,
 * NUll on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newN, *tmp;
	unsigned int len = 0;

	newN = malloc(sizeof(list_t));
	if (newN == NULL)
		return (NULL);

	while (str[len])
		len++;

	newN->len = len;
	newN->str = strdup(str);

	if (*head == NULL)
	{
		newN->next = *head;
		*head = newN;
	}
	else
	{
		newN->next = NULL;
		tmp = *head;

		while (tmp->next)
			tmp = tmp->next;
		tmp->next = newN;
	}

	return (newN);
}
