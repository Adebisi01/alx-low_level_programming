#include "main.h"

/**
 * *_strncat - concatenate two strings
 * @dest: destination
 * @src: source
 * @n: limit
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (*(dest + len) == '\0')
	{
		len++;
	}

	for (i = 0; i <= n; i++)
	{
		*(dest + len + i) = *(src + i);
	}
	return (dest);
}
