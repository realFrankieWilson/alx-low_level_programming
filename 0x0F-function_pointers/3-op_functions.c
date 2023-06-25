#include "3-calc.h"

/**
 * op_add -> adds a and b
 * @a: a pramameter
 * @b: b parameter
 *
 * Return: 0 On success.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -> subratcs
 * @a: a pramameter
 * @b: b parameter

 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -> multiplies a and b
 * @a: a pramameter
 * @b: b parameter

 * Return: a * b;
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -> divides a from b
 * @a: a pramameter
 * @b: b parameter
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod -> modes a by b
 * @a: a pramameter
 * @b: b parameter

 * Return: a % b;
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
