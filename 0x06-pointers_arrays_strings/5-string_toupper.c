#include "main.h"

/**
 * string_toupper - converts string to upper case
 * @s: string
 * Return: uppercased letters
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s[i] = (s[i] - 32);
	}
	return (s);
}
