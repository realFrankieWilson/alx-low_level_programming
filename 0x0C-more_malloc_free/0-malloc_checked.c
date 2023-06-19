#include "main.h"

/**
 * malloc_checked -> function that allocates memory using malloc.
 * @b: the blocks of allocation to be made.
 *
 * Return: 0 if successful. 98 if otherwise.
 */

void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
		exit(98);
	return (x);
}
