#include "main.h"

/**
 * set_bit - set bit to a index
 * @n: integer
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
