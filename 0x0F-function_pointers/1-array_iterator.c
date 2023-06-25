#include "function_pointers.h"

/**
 * array_iterator -> A function that executes a function given as parameter on
 * each element of an array.
 * @size: size of the array
 * @action: a pointer to the function.
 * @array: array of functions
 *
 * Return: 0 on success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && action != NULL && size > 0)
		while (x < size)
		{
			action(array[x]);
			x++;
		}

}
