#include "main.h"

/**
 * print_binary - print bnary covertions
 * @n: integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;

	if (n == 0)
		_putchar(n + '0');
	while (n > 0)
	{
		if ((n & 1) == 0)
		{
			i += (i + 0);
			n = n >> 1;
			_putchar('0');
		}
		else
		{
			i += (i + 1);
			n = n >> 1;
			_putchar('1');
		}
	}
}
