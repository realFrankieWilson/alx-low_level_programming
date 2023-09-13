#include "hash_tables.h"

/**
 * hash_table_delete -> Deletes a hash table
 * @ht: the table to be deleted
 *
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *temp;
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
