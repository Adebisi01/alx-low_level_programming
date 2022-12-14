#include "main.h"

/**
 * print_rev - print characters in reverse
 * @s: character
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (--len; len >= 0; len--)
	{
		_putchar((s[len]));
	}
	_putchar('\n');
}
