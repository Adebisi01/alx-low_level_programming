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

	for (strlen = 1; *(s + strlen) != '\0'; strlen++)
		;
	for (i = 0; i < strlen; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return ('\0');
}

