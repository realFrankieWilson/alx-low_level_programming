#include "hash_tables.h"

/**
 * hash_table_create -> Creates a hash table.
 * @size: size of the table.
 *
 * Return: A pointer to the newly created hash table
 *	Otherwise, NULL is returned.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/** variable declarations **/
	hash_table_t *new_t;
	unsigned int index;

	/** check for empty size **/
	if (size == 0)
		return (NULL);

	/** allocate memory And array**/
	new_t = malloc(sizeof(hash_table_t));

	/** check for memory allocation error **/
	if (new_t == NULL)
		return (NULL);

	/** allocate size **/
	new_t->size = size;
	new_t->array = malloc(sizeof(hash_table_t *) * size);
	/** checks for empty table array **/
	if (new_t->array  == 0)
		return (NULL);

	/** initializes all array at index to NULL **/
	for (index = 0; index < size; index++)
		new_t->array[index] = NULL;

	return (new_t);
}
