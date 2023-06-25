#include <stdio.h>
#include <stdlib.h>

/**
 * main -> prints the opcodes of itself.
 * @argc: The number of arguments supplies to the program
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, x;

	unsigned char opcode;

	int (*address)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < x; i++)
	{
		opcode = *(unsigned char *) address;
		printf("%.2x", opcode);

		if (i == x - 1)
			continue;
		printf(" ");
		address++;

	}
	printf("\n");
	return (0);
}
