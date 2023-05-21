#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -> Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, s;

	for (a = 0; a <= 98; a++)
	{
		for (s = a + 1; s <= 99; s++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((s / 10) + '0');
			putchar((s % 10) + '0');

			if (s == 98 && s == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
