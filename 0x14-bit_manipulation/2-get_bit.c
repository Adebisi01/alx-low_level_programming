#include "main.h"
/**
 * get_bit - get value of bit at a given index
 * @n: long integer
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	val = (n >> index) & 1;
	return (val);
}
