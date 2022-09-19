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

	while (i < n)
	{
		printf("%d, ", *(a + i));
		if (n != (i + 1))
		{
			printf("%d, ", *(a + i));
		} else
			printf("%d", *(a + i));
		i++;
	}
}

