#include "main.h"

/**
 * print_diagsums - ppint diagonal sum
 * @a: array
 * @size: diagnal size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		_putchar(a[i][j]);
		i++;
		j++;
	}

	i = 0;
	j = (size - 1);
	_putchar(',' + '0');

	while (i < size)
	{
		_putchar(a[i][j]);
		j--;
		i++;
	}
}
