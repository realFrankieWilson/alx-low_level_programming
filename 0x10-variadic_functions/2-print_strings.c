#include "variadic_functions.h"
/**
 * print_strings -> print strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the stirngs to be printed.
 *
 * Return: 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i = 0;

	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
