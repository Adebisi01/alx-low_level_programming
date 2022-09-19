#include "main.h"

/**
 * swap_int - swaps integers values
 * @a: int a
 * @b: int b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int p;
	int q;

	p = *a;
	q = *b;

	*a = q;
	*b = p;
}
