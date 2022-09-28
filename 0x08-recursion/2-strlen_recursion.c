#include "main.h"

/**
 * _strlen_recursion - get string length
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
		return;
	i++;
	_strlen_recursion(s + i);
	return (i);
}
