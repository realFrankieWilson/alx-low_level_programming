#include "main.h"
/**
 * binary_to_uint -> converts a binary number to an unsigned int
 * @b: The binary string to convert
 * str_len -> a function taht returns string leng.
 *
 * Return: The converted number from the binary.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, sum = 0;

	if (b == NULL)
		return (0);
	len = str_len(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);
		else if (b[len] == 49)
			sum = sum + (1 << i);
		i++;
	}

	return (sum);
}


/**
 * str_len -> Returns the len of a string
 * @s: string to count.
 *
 * Return: string length.
 */

int str_len(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
