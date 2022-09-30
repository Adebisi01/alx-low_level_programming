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
	int j = (int) n;

	for (i = 0; i < j; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
