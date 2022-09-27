#include "main.h"

/**
 * _strspn - get length of string
 * @s: string
 * @accept: substring
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res, i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		res = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				res = 0;
				break;
			}
		}
		if (res == 1)
		{
			break;
		}
	}
	return (i);
}
