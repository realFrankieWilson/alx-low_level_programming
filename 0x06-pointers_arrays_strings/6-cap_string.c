#include "main.h"

/**
 * cap_string -> capitalizes all words of a string.
 * @s: the string to be capitalised
 *
 * Return: words
 */

char *cap_string(char *s)
{
	int a = 0, i = 0;
	int element = 13;
	char spc[] = {32, '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};

	while (s[a])
	{
		i = 0;
		while (i < element)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return (s);
}
