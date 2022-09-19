#include "main.h"

/**
 * puts_half - prints half
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		i++;
	}
	if ((i % 2) != 0)
		j = (i / 2) + 1;
	j = (i / 2);

	for (; j < i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
