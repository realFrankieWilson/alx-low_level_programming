#include "main.h"

/**
 * main -> a program that multiplies two positive numbers.
 * Usage: mul1 num1 num2
 * Prints the result, followed by a new line.
 * Prints Error if num1 and num2 should only be composed of digits.
 * followed by a new line and exit with a status of 98.
 */
void _print(char *str, int l);
char *mul(char n, char *num, int num_index, char *dest, int dest_index);
int check_for_digits(char **av);
void init(char *str, int l);

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a, *t, error1[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; error1[ti]; ti++)
			_putchar(error1[ti]);
		exit(98);
	}

	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; error1[ti]; ti++)
			_putchar(error1[ti]);
		exit(98);
	}
	init(a, ln - 1);
	for (ti = 12 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; error1[ti]; ti++)
				_putchar(error1[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}

/**
 * init -> initializes strings.
 * @str: string to initialize
 * @l: length of string.
 *
 * Return: Nothing.
 */

void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}




/**
 * check_for_digits -> checks the arguments to ensure they are digits.
 * @av: pointer to the arguments.
 *
 * Return: 0 if digits, 1 if not.
 */

int check_for_digits(char **av)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}



/**
 * mul -> multiplies a char with a string and places the
 * answer into dest.
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition.
 *
 * Return: pointer to dest, or NULL on failure.
 */

char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';

	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}


/**
 * _print -> move a string from one palce to the left and prints the string.
 * @str: string to move
 * @l: size of string.
 *
 * Return: Nothing.
 */

void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
}
