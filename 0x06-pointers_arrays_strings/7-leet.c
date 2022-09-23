#include "main.h"

/**
 * leet - encodes to 1337
 * @s: string
 * Return: encoded string
 */
char *leet(char *s)
{
	int cap[] = {'A', 'E', 'O', 'T', 'L'};
	int small[] = {'a', 'e', 'o', 't', 'l'};
	int rep[] = {'4', '3', '0', '7', '1'};
	int i;
	int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == cap[j] || *(s + i) == small[j])
			{
				*(s + i) = rep[j];
			}
		}
	}
	return (s);
}
