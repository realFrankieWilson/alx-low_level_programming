#include "main.h"

/**
 * wordcnt -> counts the number of words in a string.
 * @s: string to count
 *
 * Return: integer number of words.
 */

int wordcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow -> A function that splits a string into words
 * @str: string to be splited
 *
 * Return: NULL if str == NULL or str == "" or if function fails.
 * otherwise, return pointer to an array of strings.
 */

char **strtow(char *str)
{
	int i, j, k, l, n = 0, m = 0;
	char **dptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wordcnt(str);
	if (n == 1)
		return (NULL);
	dptr = (char **) malloc(n * sizeof(char *));
	if (dptr == NULL)
		return (NULL);
	dptr[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			dptr[m] = (char *) malloc(j * sizeof(char));
			j--;
			if (dptr[m] == NULL)
			{
				for (k = 0; k < m; k++)
					free(dptr[k]);
				free(dptr[n - 1]);
				free(dptr);
				return (NULL);
			}
			for (l = 0; l < j; l++)
			dptr[m][l] = str[i + l];
			dptr[m][l] = '\0';
			m++;
			i += j;
		}
		else
			i++;
	}
	return (dptr);
}
