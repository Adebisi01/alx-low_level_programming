#include "main.h"
/**
 * main - prints its own name
 * @argv: argv
 * @argc: argc
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
