#include "main.h"

/**
 * flip_bits -> A function that returns the number of bits that is being passed
 * @n: the number to be fliped.
 * @m: the number of bits.
 *
 * Return: the number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flips = 0;
	unsigned long int j = sizeof(unsigned long int) * BIT8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			flips += 1;
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
