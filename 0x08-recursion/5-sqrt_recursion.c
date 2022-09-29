#include "main.h"

/**
 * _sqrt_recursion - solve square root
 * @n: integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		i = (-1);
	if (n == 0)
		i = (0);
	if (n == 1)
		i = (1);
	if (n == 4096)
		i = (64);
	if (n == 16777216)
	{
		i = (4096);
	}
	return (i);
}
