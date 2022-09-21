#include "main.h"

/**
 * *_strncat - concatenate two strings
 * @dest: destination
 * @src: source
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = strlen(dest);

	for (i = 0; i <= n; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
