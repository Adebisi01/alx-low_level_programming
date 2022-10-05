#include "main.h"

/**
 * alloc_grid - returns pointer to two dimensional array
 * @width: width
 * @height: height
 * Return: NULL or int
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **space;

	if (width <= 0 || height <= 0)
		return (NULL);

	space = malloc(sizeof(int *) * height);

	if (space == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		space[i] = malloc(sizeof(int) * width);
		j = 0;

	}
	return (space);
}
