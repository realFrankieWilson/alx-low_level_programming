#include "main.h"

/**
 * flib_bits -> A function that returns the number of bits that is being passed
 * @n: the number to be fliped.
 * @m: the number of bits.
 *
 * Return: the number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		i += (xor & 1);
		i >>= 1;
	}
	return (i);
}
