#include "main.h"

/**
 * str_concat - Joins two string together
 * @s1: first string
 * @s2: second string
 * Return: Combined string or null
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len;
	char *space;

	len = (sizeof(char) * (strlen(s1) + strlen(s2)));
	space = malloc(len);
	if (space == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		space[i] = s1[i];
		i++;
	}
	while (s2[j] != '\n')
	{
		space[i] = s2[j];
		j++;
	}
	space[i + j] = '\0';
	return (space);
}
