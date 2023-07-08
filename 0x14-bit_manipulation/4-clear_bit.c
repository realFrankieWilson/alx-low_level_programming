#include "main.h"

/**
 * clear_bit -> Sets the value of a bit at a given index.
 * @n: The value to be returned.
 * @index: index starting from 0 of the bit.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * BIT8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
