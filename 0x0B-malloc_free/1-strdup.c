#include "main.h"

/**
 * _strdup - duplicates string in allocated memory
 * @str: string to duplicate
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *space;

	if (str == NULL)
	{
		return (NULL);
	}

	space = malloc(sizeof(str));
	if (space == NULL)
	{
		printf("cannot allocate %ld byte", sizeof(str));
		return (NULL);
	}
	while (i < sizeof(str))
	{
		space[i] = str[i];
		i++;
	}
	return (space);
}
