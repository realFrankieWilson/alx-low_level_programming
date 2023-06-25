#include "3-calc.h"

/**
 * get_op_func -> structure of the defined operator
 * @s: a pointer to the operator.
 *
 * Return: Not 0.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;
		i++;
	}
	return (ops[i].f);

}
