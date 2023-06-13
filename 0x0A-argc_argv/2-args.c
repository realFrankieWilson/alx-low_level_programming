#include "main.h"
/**
 * main -> prints all arguments it receives.
 * @argc: a parameter that counts the input
 * @argv: stores the strings of arguments
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	while (argc > 0)
	{
		printf("%s\n", *(argv++));
		argc--;
	}
	return (0);
}
