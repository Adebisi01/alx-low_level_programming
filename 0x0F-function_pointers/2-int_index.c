#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: array size
 * @cmp: compare values
 * Return: 1 0r 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			break;
	}
	if (result == 0)
		return (-1);
	return (i);
}

