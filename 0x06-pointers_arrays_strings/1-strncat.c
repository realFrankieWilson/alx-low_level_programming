#include "main.h"

/**
 * _strncat -> concatenates strings
 * @dest: string to pass.
 * @src: string to pass
 * @n: numbers of int
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
