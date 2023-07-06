#include "lists.h"

/**
 * insert_nodeint_at_index -> Inserts a new node to a listint_t
 * list at given position.
 * @head: A pointer to the address of the head of the listint_t list.
 * @idx: the index of the listint_t, where the new node should be added
 * -indices start at 0.
 * @n: the integer for the new node to contain.
 *
 * Return: If the function fails -> NULL.
 * Otherwise -> the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int s;
	listint_t *new_node, *tmp;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		if (*head == NULL)
		{
			*head = new_node;
			new_node->next = NULL;
			new_node->n = n;
			return (new_node);
		}

		if (idx == 0)
		{
			new_node->next = *head;
			new_node->n = n;
			*head = new_node;
			return (new_node);
		}
		tmp = *head;
		while (s < idx)
		{
			tmp = tmp->next;
			s++;
		}
		new_node->n = n;
		new_node->next = tmp->next;
		tmp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
