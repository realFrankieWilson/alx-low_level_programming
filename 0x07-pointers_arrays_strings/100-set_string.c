#include <stdio.h>

/**
 * set_string -> sets the value of a pointer to a char.
 * @s: a double pointer to store the second pointer.
 * @to: the second pointer.
 *
 * Return: strings
 */
void set_string(char **s, char *to)
{
	s = &to;
}
