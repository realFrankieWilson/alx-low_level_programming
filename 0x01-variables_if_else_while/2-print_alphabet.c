#include <stdio.h>
/**
 * main -> Runs the code
 *
 * Return: Alwasy Success (0)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
