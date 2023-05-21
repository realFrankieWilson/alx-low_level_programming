#include <stdio.h>
/**
 * main -> Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'q' && alphabets != 'e')
			putchar(alphabets);
	}
	putchar('\n');

	return (0);
}
