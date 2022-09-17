#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: argument
 * Return:void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(32);
		}
		_putchar('\n');
	}
}
