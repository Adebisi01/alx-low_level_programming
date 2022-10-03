#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * isAlpha - checks for alphabets
 * @s: character
 * Return: 0 or 1
 */
int isAlpha(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) < '0' || *(s + i) > '9')
			return (1);
		return (0);
	}
	return (0);
}
/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: 0 or 1
 */


int main(int argc, char *argv[])
{
	int i;
	int total = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isAlpha(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (1);
}
