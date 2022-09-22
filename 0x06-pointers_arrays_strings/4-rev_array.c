#include "main.h"

/**
 * reverse_array - prints the reverse arrangement of array
 * @a: array
 * @n: number of integers in array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	char arr[n];
	int j = 0;
	int k = 0;

	for (i = n; i >= 0; i--)
	{
		arr[j] = a[i];
		j++;
	}
	for (k = 0; k <= n; k++)
	{
		a[k] = arr[k];
	}
	return (a);
}
