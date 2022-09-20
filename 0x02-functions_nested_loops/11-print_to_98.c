#include "main.h"
/**
 * print_to_98 - print natural numbers till 98
 * @n: starting point
 * Return: nothing
 */
void print_to_98(int n)
{
	int i = 0;
	
	_putchar(n + '0');
	for (i = n + 1; i <= 98; i++)
	{
		if(i < 10)
		{
			_putchar(44);
			_putchar(32);
			_putchar(i + '0');
		}
		else if (i >= 10)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	}
}
