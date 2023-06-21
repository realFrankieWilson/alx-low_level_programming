#include "main.h"

/**
 * strtow -> A function that splits a string into words.
 * @str: a pointer to an array of string.
 *
 * Return: NULL if str == NULL or str == ""
 * if function fails, retuns NULL. Otherwise, returns a str.
 */

char **strtow(char *str)
{
	char **array;
	int i, j, m, k = 0, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
				((str[i + 1] == ' ' || str[i + 1] == '\t') || str[i + 1] == '\n'))
			count++;
	}

	if (count == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (count + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0' && k < count; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			len = 0;
			j = i;
			while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
				j++, len++;
			array[k] = malloc((len + 1) * sizeof(char));
			if (array[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(array[k]);
				free(array);
				return (NULL);
			}
			for (m = 0; m < len; m++, i++)
				array[k][m] = str[i];
			array[k++][m] = '\0';
		}

	}
	array[k] = NULL;
	return (array);
}
