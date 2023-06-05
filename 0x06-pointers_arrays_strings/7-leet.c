#include "main.h"
#include <string.h>

/**
 * leet -> a Fucntion that encodes a string into 1337.
 * @x: an input string to encode
 *
 * Return: An encoded string
 */

char *leet(char *x)
{
	int i = 0, j;
	char strings[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char swap[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (x[i])
	{
		for (j = 0; j < 10; j++)
			if (x[i] == strings[j])
				x[i] = swap[j];
		i++;
	}

	return (x);
}

