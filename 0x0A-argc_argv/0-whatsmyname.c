#include "main.h"

/**
 * main -> prints the name of the program.
 * @argc: unused parameter.
 * @argv: array of strings.
 *
 * Return: Always 0 (on success)
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
