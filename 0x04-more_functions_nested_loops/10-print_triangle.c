#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size
 * Return: void
 */
void print_triangle(int size)
{
	int j;
	int k;
	int l;

	for (j = (size - 1); j >= 0; j--)
	{
		for (l = 1; l <= j; l++)
		{
			_putchar(32);
		}
		for (k = 1; k <= (size - j); k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
