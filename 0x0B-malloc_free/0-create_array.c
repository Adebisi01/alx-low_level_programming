#include "main.h"
#include <stdio.h>

/**
 * create_array - Create an array with malloc
 * @size: size
 * @c: character
 * Return: Null or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size);
	if (str == NULL)
	{
		printf("Cannot allocate %d bytes", size);
		return (1);
	}
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
