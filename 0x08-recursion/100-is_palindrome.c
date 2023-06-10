#include "main.h"
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
