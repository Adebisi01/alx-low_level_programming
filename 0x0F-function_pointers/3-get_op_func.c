#include "3-calc.h"

/**
 * get_op_func - checks for appropriate function
 * @s: operator
 * Return: pointer
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i] != NULL)
	{
		if (ops[i][0] == s)
			return (&ops[i][1]);
		i++;
	}
}

