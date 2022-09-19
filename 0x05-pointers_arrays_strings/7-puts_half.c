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
	for (j = 0; j <= (i / 2); j++)
	{
		_putchar(str[j]);
	}
}	
