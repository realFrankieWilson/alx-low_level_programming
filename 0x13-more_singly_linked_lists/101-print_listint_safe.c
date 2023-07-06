#include "lists.h"

/**
 * print_listint_safe -> A function that prints a listint_t linked list
 * @head: the head list.
 *
 * Return: 98 if failed otherwise 0 on success.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *ind = head, *dex = head;

	if (head == NULL)
	{
		exit(98);
	}
	while (ind && dex && dex->next && head)
	{
		ind = ind->next;
		dex = dex->next->next;
		if (ind == dex)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	head = NULL;
	return (nodes);
}
