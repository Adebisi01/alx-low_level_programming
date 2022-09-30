#include "main.h"
/**
 * _memcpy - copy n bytes to memeory area
 * @dest: destination pointer
 * @src: source
 * @n: number of bytes
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = (int) n;

	for (i = 0; i < j; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
