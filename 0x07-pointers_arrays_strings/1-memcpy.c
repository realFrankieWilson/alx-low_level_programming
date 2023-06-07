#include "main.h"

/**
 * _memcpy -> copies memory area.
 * @dest: The memory area destination
 * @src: The memory area source
 * @n: The bytes of the memory area @s
 *
 * Return: a pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
