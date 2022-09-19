#include "main.h"

/**
 * print_array - print array
 * @a: array
 * @n: number to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while(*(a + i) i <= n)
	{
		_putchar(*(a + i));
		_putchar(44);
		_putchar(32);
		i++;
	}
}

