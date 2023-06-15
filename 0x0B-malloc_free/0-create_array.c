#include "main.h"

/**
 * create_array -> creates an array of chars
 * and initialize it with a specific char.
 * @size: The size of the array.
 * @c: The character to be initialized.
 *
 * Return: if size is 0 or fails to allocate, returns NULL
 * or ptr if success.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
