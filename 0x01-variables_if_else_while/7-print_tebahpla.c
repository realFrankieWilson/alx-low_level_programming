#include <stdio.h>
/**
 * main -> Runs the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
	putchar('\n');

	return (0);
}
