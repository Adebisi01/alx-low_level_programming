#include "main.h"

/**
 * _print_rev_recursion - print recursion in reverse
 * @s: string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;

	if (*(s + i) == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + i));
	i--;
	_print_rev_recursion(s + i);
}
