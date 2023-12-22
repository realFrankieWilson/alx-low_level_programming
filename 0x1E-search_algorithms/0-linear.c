#include "search_algos.h"

/**
 * linear_search -> A function that searches for a value in an array of
 * of integers using the Linear Search algorithm.
 *
 * @array: A pointer to the first element of the array to seach in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Desc:
 *		If value is not present in array or if array is NULL, function returns
 * -1.
 *		Prints the value to be compared each time it compares with value
 *		in the array.
 *
 * Return: Value if found, otherwise, NULL is returned.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)

		for (; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}

	return (-1);
}
