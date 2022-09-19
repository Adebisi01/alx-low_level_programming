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

	size = sizeof(s) - 1;
	while(size >= 0)
	{
		puts(s[size]);
		size--;
	}
}
