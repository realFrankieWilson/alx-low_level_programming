#include "main.h"

/**
 * is_prime -> it check prime numbers
 * @x: number
 * @y: iterator
 *
 * Return: a 1, / 0.
 */
int is_prime(int x, int y)
{
	if (x <= 1)
		return (0);
	if (x % y == 0 && y > 1)
		return (0);
	if ((x / y) < y)
		return (1);
	return (is_prime(x, (y + 1)));
}
/**
 * is_prime_number -> A function that returns a prime number.
 * @n: the number to be returnded.
 *
 * Return: 1 if it's prime, 0 if otherwise.
 */
int is_prime_number(int n)
{
		return (is_prime(n, 1));
}
