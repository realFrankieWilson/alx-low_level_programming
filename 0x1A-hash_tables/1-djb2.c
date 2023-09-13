#include "hash_tables.h"

/**
 * hash_djb2 -> Implements the djb2 algorithm.
 * @str: The imput string
 *
 * Return: hashed values.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
