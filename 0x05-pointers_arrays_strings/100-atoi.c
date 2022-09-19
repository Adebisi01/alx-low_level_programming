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
		if ((*(s + j)) >= 48 && (*(s + j)) <= 57)
		{
			printf("%d", *(s + j));
			hasDigit = 1;
		}
	}
	return(hasDigit);
}
