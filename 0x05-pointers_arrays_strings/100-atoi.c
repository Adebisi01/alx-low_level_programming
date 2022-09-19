#include "main.h"

/**
 * _atoi - print integers
 * @s: string
 * Return: zero or numbers
 */
int _atoi(char *s)
{
	int i = 0;
	bool hasDigit = false;

	while (*(s + i))
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (isdigit(*(s + j)))
		{
			printf("%d", *(s + j));
			hasDigit = true;
		}
	}
	if (hasDigit == false)
	{
		return (0);
	}
}
