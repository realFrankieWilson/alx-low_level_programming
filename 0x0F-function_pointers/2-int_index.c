#include "function_pointers.h"

/**
 * int_index -> searches for integers.
 * @array: array of integers.
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Return: the index of cmp. -1 if no element matches.
 * -1 if size is less than 1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
		{
			return (i);
		}
	return (-1);
}
