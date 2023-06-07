#include "main.h"
/**
 * _strspn -> gets the length of a prefix substring.
 * @s: string
 * @accept: character to be returned
 *
 * Return: the number of bytes in the initial segment of s
 * which consit only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, len, j;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '0'; j++)
			{
				if (s[i] == accept[j])
					len++;
			}
		}		else
			return (len);
	return (len);
}
