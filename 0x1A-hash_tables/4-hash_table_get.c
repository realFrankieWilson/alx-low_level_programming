#include "hash_tables.h"

/**
 * hash_table_get -> Retrieves the value associated with a key
 * @key: the key to retrieve.
 * @ht: the hash table to work on
 *
 * Return: value associated with the element.
 *	Otherwise...Null is returned.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_element;
	unsigned int index;

	if (!(ht == NULL || key == NULL || strlen(key) == 0))
	{
		index = key_index((unsigned char *)key, ht->size);
		for (new_element = ht->array[index]; new_element != NULL;
				new_element = new_element->next)
		{
			if (strcmp(new_element->key, key) == 0)
				return (new_element->value);
		}
		return (NULL);
	}
	return (NULL);
}
