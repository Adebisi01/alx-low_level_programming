#include "main.h"

/**
 * _abs - returns absolute value
 * @n: integer
 * Return: absolute;
 */
int _abs(int n)
{
	int i = 0;

	if (n < 0)
	{
		i = (n * -1);
	}
	else if (n > 0)
	{
		i = n;
	}
	return (i);
}
