#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome -> return a palindrome string.
 * @s: string to be returned.
 *
 * Return: 1 if s is not empty and 0 if it is.
 */
int is_palindrome(char *s)
{
	if (s == '\0')
		return (0);
	else
		return (*s + 1);
}

/**
 * _strlen_recursion -> returns the length
 * @s: string to calculate the length of
 *
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal -> checks the character recursive
 * @s: string to check
 * @len: length of the string
 * @i: iterator
 *
 * Return: 1 if true, otherwise 0.
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len) - 1)
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
