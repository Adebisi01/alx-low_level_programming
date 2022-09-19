#include "main.h"

/**
 * rev_string - rverses strings
 * @s: string
 * Return: nothing
 */
void rev_string(char *s)
{
	int len;
	int i;
	char str;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		str = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = str;		
	}
}
