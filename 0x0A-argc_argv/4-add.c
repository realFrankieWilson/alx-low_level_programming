#include "main.h"

/**
 * main -> adds positive numbers.
 * @argc: arguments count
 * @argv: arguments vector(arrays).
 *
 * Return: 1 if number contains symbols and 0 if success.
 */

int main(int argc, char **argv)
{
	int sum = 0, num, i, c, d;

	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c] != '\0'; c++)
		{
			if (argv[i][c] > '9' || argv[i][c] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (d = 1; d < argc; d++)
	{
		num = atoi(argv[d]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
