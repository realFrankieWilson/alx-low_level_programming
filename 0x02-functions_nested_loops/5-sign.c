#include "main.h"
/**
 * print_sign -> checks for number
 * @n: parameter of the function
 *
 * Return: 1 on Success, 0 and -1 (if otherwise)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
