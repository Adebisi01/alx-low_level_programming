#include "main.h"
/**
 * print_to_98 - print natural numbers till 98
 * @n: starting point
 * Return: nothing
 */
void print_to_98(int n)
{
	int i = 0;
	
	printf("%d", n);
	for (i = (n + 1); i <= 98; i++)
	{
		printf(", %d", i);
	}
	_putchar('\n');
}
