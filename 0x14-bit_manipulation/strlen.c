#include "main.h"

/**
 * str_len -> Returns the lenght of a string.
 * @s: The string to count.
 *
 * Return: string.
 */

int str_len(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
