#include "hash_tables.h"

/**
 * hash_table_print -> A function that prints a hash table.
 * @ht: the hash table to be printed.
 *
 * Return: Always 0 on success
 *	Otherwise, NULL is returned.
 */

void hash_table_print(const hash_table_t *ht)
{
	int count = 0;
	unsigned int index;
	hash_node_t *new_node;

	if (!ht)
		return;
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (count == 1)
				printf(", ");
			new_node = ht->array[index];
			while (new_node != NULL)
			{
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				if (new_node == NULL)
					printf(", ");
			}
			count = 1;
		}
	}
	printf("}\n");
}
