#include "main.h"

/**
 * positive_or_negative -> Assigns a random number to variable n
 * @i: number to be printed
 *
 * Return: Always success(0)
 */

int positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
