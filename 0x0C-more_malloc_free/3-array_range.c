#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc((max - min) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
