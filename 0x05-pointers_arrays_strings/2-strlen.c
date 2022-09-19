#include "main.h"

/**
 * _strlen - returns length string
 * @s: string
 * Return: integer
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while(s != '\0')
	{
		c++;
		s++;
	}
	return c;
}
