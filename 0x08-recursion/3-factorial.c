#include "main.h"

/**
 * factorial - calculates factorial
 * @n: integer
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
