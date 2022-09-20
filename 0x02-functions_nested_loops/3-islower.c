#include "main.h"

/**
 * _islower - checks lower characters
 * @c: character
 * Return: 1 or 0
 */
int _islower(int c)
{
	int i = 0;

	if (c >= 'a' && c <='z')
	{
		i = 1;
	}
	else
		i = 0;

	}
	return (i);
}
