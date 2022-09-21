#include "main.h"

/**
 * strcmp - compares string
 * @s1: first string 
 * @s2: second string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if(s1 > s2)
	{
		i = 1;
	}
	else if (s2 > s1)
	{
		i = -1;
	}
	else if (s1 == s2)
	{
		i = 0;
	}
	return (i);
