#include "main.h"

/**
 * _strpbrk -> A function that serches a string for any of a set of bytes
 *
 * @s: The sting to be returned
 * @accept: the character to be returned
 *
 * Return: the number of bytes of the inital segment @s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
