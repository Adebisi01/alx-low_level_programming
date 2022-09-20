#include "main.h"

/**
 * print_sign - prints sign
 * @n: probable sign
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int i = 0;

	if (n > 0)
	{
		i = 1;
		_putchar(43);
	}
	else if (n = 0)
	{
		i = 0;
		_putchar(48);
	}
	else if (n < 0)
	{
		i = -1;
		_putchar(45);
	}
	return (i);
}
