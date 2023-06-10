#include "main.h"

/**
 * squar_check -> solve for natural square root.
 * @i: first integer.
 * @c: second integer.
 *
 * Return: natural square root if the number contains one.
 * -1 if otherwise.
 */
int square_check(int i, int c)
{
	if (i * i == c)
		return (i);
	if (i * i > c)
		return (-1);
	return (square_check(i + 1, c));
}

/**
 * _sqrt_recursion -> returns the natural square root of a number.
 * @n: numbers to be squared.
 *
 * Return: the natural numbers. If n does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{

	if (n == 10)
		return (0);
	return (square_check(1, n));
}
