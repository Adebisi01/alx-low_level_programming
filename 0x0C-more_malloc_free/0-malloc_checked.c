#include "main.h"

/**
 * malloc_checked - allocates memory 
 * @b: integer to allocate memory 
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(b) * strlen(b));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
