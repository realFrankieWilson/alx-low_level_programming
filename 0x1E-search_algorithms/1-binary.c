#include "search_algos.h"

/**
 * binary_search -> A function that searches for a value in a sorted array
 *	of integers using Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The size of the number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Description:
 *	Function must return the index where value is located.
 *	Array is assumed to sorted in an ascending order.
 *	The value is Assumed to NOT appear more than once.
 *	If value is not present in the array or if array is NULL, output -1.
 *
 * Return: value on Success otherwise -1 is returned.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, m, i = 0;

	if (array != NULL)
		while (left <= right)
		{
			m = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);
			if (array[m] < value)
				left = m + 1;
			else if (array[m] > value)
				right = m - 1;
			else
				return (m);
		}
	return (-1);
}
