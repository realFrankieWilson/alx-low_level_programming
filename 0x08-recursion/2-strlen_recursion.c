#include "main.h"
/**
 * _strlen_recursion -> returns the length of a string.
 * @s: the length to be returned
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
