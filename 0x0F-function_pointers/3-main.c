#include "3-calc.h"

/**
 * main - main function
 * @argv: arguments
 * @argc: argument counts
 */
void main(int argc __attribute__((unused)), char *argv[])
{
	int s = atoi(argv[2]);
	int a = atoi(argv[1]);
	int b = atoi(argv[4]);

	(*get_op_func(s))(a)(b);
}
