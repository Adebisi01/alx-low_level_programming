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
	int *space[width][height];

	if (width <= 0 || height <= 0)
		return (NULL);

	space = malloc(width * height);

	if (space == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			space[i][j] = 0;
		}
	}
	return (space);
}
