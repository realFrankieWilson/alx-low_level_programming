#include "main.h"
/**
 * main -> prints the number of arguments passed into it.
 * @argc: arguments to count from the CML.
 * @argv: unused parameter.
 *
 * Return: 0 (Success)
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	int sum = 0;

	sum += argc;
	printf("%d\n", sum);

	return (0);
}
