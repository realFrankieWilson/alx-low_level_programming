#include "main.h"

/**
 * string_nconcat -> A function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of block to be allocated.
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenate;
	unsigned int lent = n, i;

	if (s1 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		lent++;

	concatenate = malloc(sizeof(char *) * (lent + 1));
	if (concatenate == NULL)
		return (NULL);

	lent = 0;

	for (i = 0; s1[i]; i++)
		concatenate[lent++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concatenate[lent++] = s2[i];

	concatenate[lent] = '\0';

	return (concatenate);
}
