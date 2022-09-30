#include "main.h"
/**
 * main - prints its own name
 * @argv: argv
 * @argc: argc
 * Return: nothing
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (argv)
	{
		printf("%s\n", *argv[i]);
		i++;
	}
	return (0);
}
