#include "main.h"

/**
 * print_line - print line
 * @n: number of lines to print
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
