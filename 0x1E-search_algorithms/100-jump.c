#include "search_algos.h"
size_t get_min(size_t, size_t);

/**
 * jump_search -> A function that searches for a value in a sorted array
 *	of integers using the Jump search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The size of the number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Description:
 *	Function must return the index where value is located.
 *	Array is assumed to sorted in an ascending order.
 *	Square root of the size of the array can be used as the jump step.
 *	If value is not present in the array or if array is NULL, output -1.
 *
 * Return: value on Success otherwise -1 is returned.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t right, left, middle;

	if (!array || size == 0)
		return (-1);

	middle = sqrt(size);

	for (right = 0; right < size && array[right] < value;
			left = right, right += middle)
	{
		printf("Value checked array[%lu] = [%d]\n",
				right, array[right]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (; left <= get_min(right, size - 1); left++)
	{
		printf("Value checked array[%lu] = [%d]\n",
				left, array[left]);
		if (array[left] == value)
			return (left);
	}
	return (-1);
}


/**
 * get_min -> Gets the minimum value of two integer values.
 *
 * @val: A value to check
 * @val2: The second value to check
 *
 * Return: The minumum value
 */

size_t get_min(size_t val, size_t val2)
{
	if (val2 > val)
		return (val);
	else
		return (val2);
}
