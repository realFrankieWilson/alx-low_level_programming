#include "variadic_functions.h"
/**
 * sum_them_all -> sums all the given parameter.
 * @n: the number of arguments to be sumed
 *
 * Return: sum, not 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i = 0, sum = 0;

	va_start(x, n);

	for (; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);
	return (sum);
}
