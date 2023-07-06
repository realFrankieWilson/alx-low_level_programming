#include "lists.h"

/**
 * add_nodeint -> A function that adds a new node at the beginning
 * of a listint_t
 * @head: the head list
 * @n: the node to be added
 *
 * Return: The address of the new element, or NUll if otherwise.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_;

	if (head != NULL)
	{
		new_ = malloc(sizeof(listint_t));
		if (new_ != NULL)
		{
			new_->n = n;
			new_->next = *head;
			*head = new_;

			return (new_);
		}
		else
			return (NULL);
	}
	return (0);
}
