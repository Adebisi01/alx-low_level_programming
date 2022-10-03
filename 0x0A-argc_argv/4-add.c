#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - prints its own name
 * @argv: argv
 * @argc: argc
 * Return: nothing
 */
int main(int argc, int *argv[])
{
	int i = 1;
	int total = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}

	for (i = 1; i <= argc; i++)
	{
		total += argv[i];
	}
	printf("%d\n", total);

}
