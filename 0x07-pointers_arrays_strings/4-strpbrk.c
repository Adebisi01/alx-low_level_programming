#include "main.h"

/**
 * _strpbrk - returns first occurence of byte
 * @s: string
 * @accept: char
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (*(s + i));
			}
		}
	}
}