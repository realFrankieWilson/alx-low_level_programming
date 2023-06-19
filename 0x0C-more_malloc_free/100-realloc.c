#include "main.h"

/**
 * _realloc -> A function that reallocates a memory block, using malloc
 * and free.
 * @ptr: a pointer
 * @old_size: an old size of the block
 * @new_size: the new block to be allocated.
 *
 * Return: 0 on success, NULL if otherwise.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int i, max = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		return (ptr2);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
		return (ptr);

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);

	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		ptr2[i] = oldptr[i];
	free(ptr);
	return (ptr2);
}
