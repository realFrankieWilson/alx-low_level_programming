#include "main.h"

/**
 * str_concat -> concatenates two strings.
 * @s1: initial string.
 * @s2: later string.
 *
 * Return: NULL on failure. If NULL is passed, it's treated as an empty string.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, k = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	ptr = (char *) malloc(l * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (k < l)
	{
		if (k < i)
			ptr[k] = s1[k];
		if (k >= i)
		{
			ptr[k] = s2[j];
			j++;
		}
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
