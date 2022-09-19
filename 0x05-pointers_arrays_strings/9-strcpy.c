#include "main.h"

/**
 * *_strcpy - copying
 * @dest: destination
 * @src: source
 * Return: a pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(str + i))
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		*(dest + i) = *(src + i);
	}
	return (*dest);
}
