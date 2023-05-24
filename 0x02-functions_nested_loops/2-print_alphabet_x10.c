#include "main.h"
/**
 * print_alphabet_x10 -> prints the alphabets 10 times
 *
 * Return: Always 0(Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int alphabets;

	for (i = 1; i <= 10; i++)
	{
		for (alphabets = 97; alphabets <= 122; alphabets++)
			_putchar(alphabets);
		_putchar('\n');
	}
}
