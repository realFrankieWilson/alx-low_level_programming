#include "main.h"

/**
 * main -> Runs a program that prints the minimal number of coins to make
 * change for an amount of money.
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int sum, i, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	sum = atoi(argv[1]);
	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && sum >= 0; i++)
	{
		while (sum >= coins[i])
		{
			sum -= coins[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
