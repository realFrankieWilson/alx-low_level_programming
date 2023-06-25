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
	unsigned int i = 0;
	char *st;

	va_list arg;

	va_start(arg, n);

	for (; i < n; i++)
	{
		st = va_arg(arg, char *);

		if (st != NULL)
			printf("%s", st);
		else
			printf("(nil)");

		if (i < --n && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);
}
