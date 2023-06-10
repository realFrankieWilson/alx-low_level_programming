#include "main.h"
/**
 * _pow_recursion -> a function that returns rased to the power of a number.
 * @y: power to be raised to.
 * @x: the value of power.
 * Return: the value of x to power y. -1 if y is lower than 0,
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
