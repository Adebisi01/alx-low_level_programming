#include "main.h"

/**
 * rev_string - rverses strings
 * @s: string
 * Return: nothing
 */
void rev_string(char *s)
{
	int len;
	
	len = 0;
	while (*(s +len) != '\0')
	{
		len++;
	}
	for (--len; len >= 0; len--)
	{
		_putchar(s[len]);
	}
}
