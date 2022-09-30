#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - prints its own name
 * @argv: argv
 * @argc: argc
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (!isdigit(atoi(argv[1])) || !isdigit(atoi(argv[2])))
	{
		printf("Error\n");
		return (1)
	}
	if (!isdigit(atoi(argv[1])) && !isdigit(atoi(argv[2])))
	{
		printf("%d\n", 0);
	}
	if (argv <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	return (0);
}
