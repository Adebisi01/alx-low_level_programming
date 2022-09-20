#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10time
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
		i++;
	}
}
