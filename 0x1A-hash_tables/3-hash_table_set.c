#include "hash_tables.h"

/**
 * hash_table_set -> Adds an element to the hash table.
 * @ht: the hash table
 * @key: the key (can be an empty key string)
 * @value: the value associated with the key. Must be duplicated and can be
 *	an empty string.
 *
 * Return: 1 on success, otherwise
 *	new node at the beginning of the list in case of collision
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *node, *i;

	if (ht == NULL || key == NULL || value == 0)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	for (i = ht->array[index]; i != NULL; i = i->next)
	{
		if ((strcmp(i->key, key) == 0) && (strcmp(i->value, value) != 0))
		{
			free(i->value);
			i->value = strdup(value);
			if (i->value == NULL)
				return (0);
		}
		return (1);
	}
	node = chained_nodes(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}


/**
 * chained_nodes -> link nodes together.
 * @key: key to map out
 * @value: the value key element
 *
 * Return: The chained element
 */

hash_node_t *chained_nodes(const char *key, const char *value)
{
	hash_node_t *new_e;

	/**allocate size and return NULL if unable to allocate **/
	new_e = malloc(sizeof(hash_node_t *));
	if (new_e == NULL)
		return (NULL);
	new_e->key = strdup(key);
	/** checks if key exist **/
	if (new_e->key == NULL)
		return (NULL);
	new_e->value = strdup(value);
	/** checks if value is empty **/
	if (new_e->value == NULL)
		return (NULL);
	return (new_e);
}
