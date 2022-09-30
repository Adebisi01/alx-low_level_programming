#include "main.h"

/**
 * _islower - checks lower characters
 * @c: character
 * Return: 1 or 0
 */
int _islower(int c)
{
	int i = 0;

	if (c >= 97 && c <= 122)
	{
		i = 1;
	}
	else
		i = 0;
	return (i);
}
