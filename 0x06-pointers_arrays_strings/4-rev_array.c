#include "main.h"

/**
 * reverse_array - prints the reverse arrangement of array
 * @a: array
 * @n: number of integers in array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		if (i == n - i)
			break;
		temp = *(a + n - i - 1);
		*(a + n - i - 1) = *(a + i);
		*(a + i) = temp;
	}
}
