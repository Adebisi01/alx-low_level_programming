#include "main.h"
#include <stdio.h>

/**
 * _isupper  - check the code.
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else if (!isupper(c))
	{
		return (0);
	}
}