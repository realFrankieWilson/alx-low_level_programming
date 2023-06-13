#include "main.h"
/**
 * main -> A program that multiplies two numbers.
 * @argc: agument count.
 * @argv: argument vector(arrays).
 *
 * Return: 0 on Success and -1 if otherwise.
 */

int main(int argc, char **argv)
{
	int mull = 0, arg1 = 0, arg2 = 0;

	if (--argc != 2)
	{
		fprintf(stderr, "Error\n");
		exit(-1);
	}
	else
	{
		arg1 = atoi(*(argv + 1));
		arg2 = atoi(*(argv + 2));
		mull = arg1 * arg2;
		printf("%d\n", mull);
	}
	return (0);
}
