#include "main.h"

/**
 * _memset -> functin that fills a memory with a constant byte.
 * @n: The bytes of the memory
 * @b: The memory area pointer
 * @s: constant byte @b
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
