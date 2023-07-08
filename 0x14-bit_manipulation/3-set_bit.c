#include "main.h"

/**
 * set_bit -> A function that sets the value of a bit to 1 at a given index
 * @index: the indext, starting from 0 of the bit to be set
 * @n: the number of bits
 *
 * Return: 1 On success, -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int)) * BIT8)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
