#include "main.h"

/**
 * _isalpha - checks alphabets
 * @c: char
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	int i = 0;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		i = 1;
	}
	else
		i = 0;
	return (i);
}
