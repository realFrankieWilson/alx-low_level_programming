#include "main.h"

/**
 * factorial -> A factorial function of a given number.
 * @n: is the given number.
 *
 * Return: 0 if n factor is 1, and return -1 to indicate error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
