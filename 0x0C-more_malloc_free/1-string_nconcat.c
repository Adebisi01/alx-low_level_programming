#include "main.h"

/**
 * string_nconcat - concatenated two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	int i;
	unsigned int j;

	if (n >= strlen(s2))
		n = strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	string = malloc(strlen(s1) + strlen(s2));
	if (string == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		string[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		string[i + j] = s2[j];
	}
	string[i + j] = '\0';
	return (string);
}

