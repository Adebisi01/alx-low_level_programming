#include "main.h"

/**
 * _atoi - print integers
 * @s: string
 * Return: zero or numbers
 */
int _atoi(char *s)
{
	int i = 0;
	int j;
	int hasDigit = 0;

	printf("%d", _atoi(s));
	while (*(s + i))
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		j++;
	}
	return (hasDigit);
}
