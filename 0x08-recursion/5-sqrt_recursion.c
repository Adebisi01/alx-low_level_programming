#include "main.h"

/**
 * _sqrt_recursion - solve square root
 * @n: integer
 * Return: square root
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return(-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
int _sqrt_recursion(int n)
{
	int i = 1;
	if (n < 0 )
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_pow_recursion(n, 2));
}
