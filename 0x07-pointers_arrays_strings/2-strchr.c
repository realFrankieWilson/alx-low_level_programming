#include "main.h"

/**
 * _strchr -> locates a character in a string.
 * @s: string to check from.
 * @c: a character
 *
 * Return: A pointer to the first occurance of a character c
 * or NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0, j;

	while (s[i])
		i++;

	for (j = 0; j < i; j++)
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	return ('\0');
}
