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

	while (*(s + i))
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if ((*(s + j)) >= 0 && (*(s + j)) <= 9)
		{
			printf("%d", *(s + j));
			hasDigit = 1;
		}
	}
	if (hasDigit == 0)
	{
		return (0);
	}
}
