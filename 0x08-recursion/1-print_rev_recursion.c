#include "main.h"

/**
 * _print_rev_recursion - print recursion in reverse
 * @s: string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	int close = 0;
	
	if (*s == '\0' && close = 0)
	{
		i = (1 + _print_rev_recursion(s + 1));
	}
	close = 1;
	if (*(s + i) == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + i));
	i--;
	_print_rev_recursion(s + i);
}