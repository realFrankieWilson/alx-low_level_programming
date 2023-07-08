#include "main.h"

/**
 * get_bit -> A function that returns the value of a bit at a iven index.
 * @n: value of a bit.
 * @index: the starting from 0 of the bit
 *
 * Return: The value of the bit at index or -1 if an error eccoured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * BIT8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
