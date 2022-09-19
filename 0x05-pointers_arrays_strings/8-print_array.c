#include "main.h"

/**
 * print_array - print array
 * @a: array
 * @n: number to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		printf("\n");
	} else
	{
		while (i < n)
		{
			if (n != (i + 1))
			{
				printf("%d, ", *(a + i));
			} else
				printf("%d\n", *(a + i));
			i++;
		}
	}
}

