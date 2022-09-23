#include "main.h"

/**
 * cap_string - converts string to upper case
 * @s: string
 * Return: capitalized letters
 */
char *cap_string(char *s)
{
	int i = 0;
	int j = 1;

	while (s[i] != '\0')
	{
		if (j == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (s[i] - 32);
			j = 0;
		}
		j = 0;
		if (s[i] == 32 || s[i] == 46)
			j = 1;
		i++;
	}
	return (s);
}
