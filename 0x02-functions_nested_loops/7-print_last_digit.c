#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: integer
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i = 0;

	if (n <= 9)
	{
		i = n;
	}
	else if (n > 9)
	{
		i = n % 10;
	}
	_putchar(i + '0');
	return (i);
}
