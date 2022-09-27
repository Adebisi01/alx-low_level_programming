#include "main.h"

/**
 * _strstr - find needle
 * @haystack: string
 * @needle: substring
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int f = 0;
	int ndllen = 0;

	for (ndllen = 0; *(needle + ndllen) != 0 ; ndllen++)
	{
		;
	}

	for (i = 0; *(haystack + i) == *(needle + i); i++)
	{
		f = 1;
		if (*(needle + i) == '\0' && f == 1)
		{
			return (needle);
		}
	}
	return ('\0');
}
