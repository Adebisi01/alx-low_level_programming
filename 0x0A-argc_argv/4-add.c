#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - prints its own name
 * isAlpha - checks for alphabets
 * @s: character
 * @argv: argv
 * @argc: argc
 * Return: nothing
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

int main(int argc, char *argv[])
{
	int i;
	int total = 0; 

	if (argc <= 1)
	{
		printf("%d\n", 0);
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
