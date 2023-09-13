#include "hash_tables.h"

/**
 * key_index -> A function that gives the index of a key.
 * @key: the key to be given
 * @size: the size of the array of the table.
 *
 * Return: The index at the key/value pair should be stored in the array of tb.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int key_i;

	key_i = (hash_djb2(key) % size);

	return (key_i);
}
