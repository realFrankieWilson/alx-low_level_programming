#include "main.h"

/**
 * _strcmp -> a function that compares two strings
 * @s1: stirng one
 * @s2: string two
 *
 * Return: 0;
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
		while (s1[i] != '\0')
		{
			if (s1[i] == s2[i])
				return (0);
			else
				return (s1[i] - s2[i]);
		}
}
