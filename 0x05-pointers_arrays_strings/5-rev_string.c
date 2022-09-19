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
	char str[10];

	len = 0;
	i = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	for (--len; len >= 0; len--)
	{
		str[i] = s[len];		
	}
	*s = str;}
