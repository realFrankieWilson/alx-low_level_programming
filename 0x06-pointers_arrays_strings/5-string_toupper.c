#include "main.h"

/**
 * string_toupper -> changes all lowercase letters of a string to uppercase
 * @str1: the string of characters to be changed
 *
 * Return: string
 */

char *string_toupper(char *str1)
{
	int i = 0;

	while (str1[i])
	{
		if (str1[i] >= 'a' && str1[i] <= 'z')
			str1[i] -= 32;
		i++;
	}
	return (str1);
}
