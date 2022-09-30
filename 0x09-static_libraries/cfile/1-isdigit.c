#include "main.h"
#include <stdio.h>

/**
 * _isdigit - functions check if a character is a digit
 *
 * @c: character to check
 *
 * Return:  1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	} else
		return (0);
}

