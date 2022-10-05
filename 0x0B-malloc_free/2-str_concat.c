#include "main.h"

/**
 * str_concat - Joins two string together
 * @s1: first string
 * @s2: second string
 * Return: Combined string or null
 */
char *str_concat(char *s1, char *s2)
{
	long unsigned int i = 0;
	long unsigned int j = 0;
	long unsigned int len;
	char *space;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len = (sizeof(char) + strlen(s1)) + (sizeof(char) + strlen(s2));
	space = malloc(len);
	if (space == null)
	{
		return (NULL);
	}
	while (i < (sizeof(char) + strlen(s1)))
	{
		space[i] = s1[i];
		i++;
	}
	while (i < len)
	{
		space[i] = s2[j];
	}
	return (space);
}
