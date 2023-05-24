#include "main.h"
/**
 * _islower -> checks for lower case
 * @c: a parameter
 *
 * Return: 1 if if character is lower and 0 if otherwise.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
