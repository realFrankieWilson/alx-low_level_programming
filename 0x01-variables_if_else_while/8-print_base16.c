#include <stdio.h>
/**
 * main -> Runs the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bin, hex;

	for (bin = '0'; bin <= '9'; bin++)
		putchar(bin);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');

	return (0);
}
