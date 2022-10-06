#include "main.h"

/**
 * _calloc - allocates memory to array
 * @nmemb: number of element
 * @size: size of elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *space;

	if (nmemb == 0 || size == 0)
		return (NULL);
	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);
	return (space);
}
