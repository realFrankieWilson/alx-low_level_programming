#include "search_algos.h"
int get_middle(int *array, int left, int right, size_t size, int value);

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
	int max;

	if (array == NULL)
		return (-1);
	max = size - 1;
	return (get_middle(array, 0, max, size, value));
}


/**
 * get_middle -> Gets the middle element of an array.
 *
 * @array: The array to derive the middle element from
 * @left: The starting point of the array.
 * @right: The end point of the array.
 * @size: The size of the array.
 * @value: The value we are looking for.
 *
 * Return: value on success, otherwise -1 is returned.
 */

int get_middle(int *array, int left, int right, size_t size, int value)
{
	int m, j = 0;

	left = 0, right = size - 1;

	if (array != NULL)
		while (left <= right)
		{
			m = (left + right) / 2;
			printf("Searching in array: ");
			for (j = left; j <= right; j++)
			{
				if (j == right)
					printf("%d", array[j]);
				else
					printf("%d", array[j]);
			}

			printf("\n");
			if (value < array[m])
				right = m - 1;
			else if (value > array[m])
				left = m + 1;
			else if (value == array[m])
				return (m);
		}
	return (-1);
}
