#include "main.h"

/**
 * alloc_grid -> a pointer to 2 dimensional array of integers.
 * @width: arry width
 * @height: the array row.
 *
 * Return: NULL on failure.
 * If width or height is 0 or negative, it returns NULL.
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			ptr[k][l] = 0;
	}
	return (ptr);
}
