#include "main.h"

/**
 * _strdup -> returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: copy of string.
 *
 * Return: NULL if str = NULL.
 * On Success, the returns a pointer.
 * Null if insurfficient memory available.
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;

	ptr = (char *) malloc(i * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
