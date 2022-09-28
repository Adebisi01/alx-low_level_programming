#include "main.h"

/**
 * _sqrt_recursion - solve square root
 * @n: integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	if (n / i == 1 && n % i = 0)
		return i;
	i++;
	_sqrt_recursion(n);
}
