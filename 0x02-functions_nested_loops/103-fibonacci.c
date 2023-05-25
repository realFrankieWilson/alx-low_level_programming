#include <stdio.h>
/**
 * main -> Runs the fibonacci sequence, less than 400000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int i = 0;

		long fib1 = 1, fib2 = 2, fibsum;

		while (fib2 + fib1 < 400000)
		{
			fib2 += fib1;

			if (fib2 % 2 == 0)
				fibsum += fib2;

			fib1 = fib2 - fib1;

			++i;
		}
		printf("%lu\n", fibsum);
		return (0);
}
