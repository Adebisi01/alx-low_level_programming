#include "main.h"

/**
 * jack_bauer - prints time in a day
 * Return: void 
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	while (i != 2 && j != 4)
	{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(58);
		_putchar(k + '0');
		_putchar(l + '0');
		++l;
		if (l > 9)
		{
			k = k + 1;
			l = 0;
		}
		if (k > 5)
		{
			j = j + 1;
			k = 0;
		}
		if (j > 9 && i < 2)
		{
			i = i + 1;
			j = 0;
		}
		if (j == 3 && i == 2)
		{
			break;
		}
		_putchar('\n');
	}
}
