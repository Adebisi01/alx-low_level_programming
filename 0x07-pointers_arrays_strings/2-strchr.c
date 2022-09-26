#include "main.h"

/**
 * _strchr - return a pointer to the string
 * @s: string
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	int strlen;
	int *ptr;

	for (strlen = 1; *(s + strlen) != '\0'; strlen++)
		;
	for (i = 0; i < strlen; i++)
	{
		if (*(strlen + i) == c)
			ptr = &(*(strlen + i));
		else
			ptr = NULL;
	}
	return (*ptr);
}

