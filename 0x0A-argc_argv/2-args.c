#include "main.h"
/**
 * main - prints its own name
 * @argv: argv
 * @argc: argc
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
