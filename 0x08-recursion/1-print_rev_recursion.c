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
	
	if (*(s + i) != '\0')
	{
		i++;
		_print_rev_recursion(s + i);
	}
	j = i;
	if (*(s + j) == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + j));
	j--;
	_print_rev_recursion(s + j);
}
