#include "lists.h"

/**
* sum_dlistint -> Sum all the data of the dlistint_t list
* @head: The head node
*
* Return: The new head of the list
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *tmp = head;

	if (head)
		while (tmp != NULL)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
	return (sum);
}