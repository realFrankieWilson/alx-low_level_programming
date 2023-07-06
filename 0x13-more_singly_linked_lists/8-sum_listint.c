#include "lists.h"

/**
 * sum_listint -> A function that returns the sum of all the nth data
 * @head: the head list
 *
 * Return: nothing.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
		while (head)
		{
			sum = sum + head->n;
			head = head->next;
		}
	return (sum);
}
