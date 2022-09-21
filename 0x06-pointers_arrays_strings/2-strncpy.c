#include "main.h"

/**
 * *_strncpy -  copy string
 * @dest: destination
 * @src: source
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
