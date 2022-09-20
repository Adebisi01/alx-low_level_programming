#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: integer
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i = 0;
	
	i = n % 10;
	if (i <= 0)
	{
		i = i * -1;
	}
	return (i);
}
