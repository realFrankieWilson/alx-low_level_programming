#include "lists.h"

/**
 * find_ -> finds the length of a string
 * @str: string to find.
 *
 * Return: legth of a string.
 */

unsigned int find_(char *str)
{
	unsigned int i = 0;

	for (; str[i]; i++)
		;
	return (i);

}

/**
 * add_node -> function that adds a new node at the beginning of a list_t.
 * @head: first node in the list
 * @str: string to add to the node.
 *
 * Return: number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (str == NULL)
		return (NULL);

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = find_(tmp->str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
