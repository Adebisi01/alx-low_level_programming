#include "main.h"

/**
 * create_array - Create an array with malloc
 * @size: size
 * @c: character
 * Return: Null or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size);
	str[0] = c;
	return (str);
}

