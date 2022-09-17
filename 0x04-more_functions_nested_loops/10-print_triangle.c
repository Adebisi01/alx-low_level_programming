#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= size; i++)
	{
		for (j = (size - 1); j >= 0; j--)
		{
			_putchar(32);
		}
		for (k = 1; k <= size; k++)
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


