#include "main.h"

/**
 * _strdup - duplicates string in allocated memory
 * @str: string to duplicate
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	char *space;

	space = malloc(sizeof(str));
	while (i < sizeof(str))
	{
		space[i] = str[i];
	}
	return (space);
}
