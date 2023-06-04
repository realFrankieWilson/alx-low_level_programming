#include "main.h"

/**
 * reverse_array -> reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements of elements to swap.
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;
	}
}
