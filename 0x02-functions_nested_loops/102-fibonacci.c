#include <stdio.h>
/**
 * main -> Prints the fibonacci sequence
 *
 * Return: Always 0 (on Success)
 */
int main()
{
	long int fib1 = 0, fib2 = 1, sum;
	int count;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
