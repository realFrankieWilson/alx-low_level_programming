#include "main.h"

/**
 * get_endianness -> A function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int big = 1;
	char *a = (char *)&big;

	if (*a)
		return (1);
	else
		return (0);
}
