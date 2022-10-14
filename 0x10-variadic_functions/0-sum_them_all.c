#include "variadic_functions.h"

/**
 * sum_them_all - sums variable number of integers
 * @n: number of integers
 * @...: all other integers
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0,
	unsigned int sum = 0;

	va_start(list, n);
	for (i = 0; i < n, i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
