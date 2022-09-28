#include "main.h"

/**
 * _print_rev_recursion - print recursion in reverse
 * @s: string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	int j = 0;
	
	if (*(s + i) != '\0' && j == 0)
	{
		i++;
		_print_rev_recursion(s + i);
	}
	j = 1;
	if (*(s + i) == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + i));
	i--;
	_print_rev_recursion(s + i);
}
