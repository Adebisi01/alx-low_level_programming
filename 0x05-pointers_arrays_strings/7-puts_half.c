#include "main.h"

/**
 * puts_half(char *str)
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (*(str + i ) != '\0')
	{
		i++;
	}
	if ((i % 2) != 0)
	{
		j = (i / 2) + 1;
	} else {
		j = (i / 2);
	}
	for (j++; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}	
