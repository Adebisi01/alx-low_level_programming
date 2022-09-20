#include "main.h"

/**
 * _islower - checks lower characters
 * @c: character
 * Return: 1 or 0
 */
int _islower(int c)
{
	int i = 0;
	int j = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			j = 1;
		}
		else
			j = 0;

	}
	return (j);
}
