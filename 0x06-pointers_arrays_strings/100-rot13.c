#include "main.h"

/**
 * rot13 -> A function that encodes a string using rot13.
 * @str: string to be printed
 *
 * Return: returns 10 to power exponent
 */

char *rot13(char *str)
{
	int i = 0, a;
	char alphabets[52] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
		'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'z'};
	char rotate[52] = {
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e',
		'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	while (str[i])
	{
		for (a = 0; a < 52; a++)
			if (str[i] == alphabets[a])
			{
				str[i] = rotate[a];
				break;
			}
		i++;
	}
	return (str);
}
