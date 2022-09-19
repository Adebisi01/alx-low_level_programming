#include "main.h"

/**
 * print_rev - print characters in reverse
 * @s: character
 * @size: character size
 * Return: Nothing
 */
void print_rev(char *s)
{
	int size;
	int len;

	len = 0;

	size = sizeof(s) - 1;
	while(*(s + len) != '\0')
	{
		len++;
	}
	for (;len >= 0; len--)
	{
		_putchar((s[len]));
	}
	_putchar('\n');
	

}
