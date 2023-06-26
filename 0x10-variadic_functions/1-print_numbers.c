#include "variadic_functions.h"

/**
 * print_numbers -> A function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 *
 * Return: 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%d", num);

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);
}
