#include "main.h"

/**
 * _memset - fills a memory with buffer
 * @s: buffer to fill
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char **p;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}
	**p = &s;
	return (*p);
}
