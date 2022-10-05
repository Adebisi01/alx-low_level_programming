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
	{
		free(space);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		space[i] = malloc(sizeof(int) * width);
		if (space[i] == NULL)
		{
			for (j = 0; j < width; j++)
				free(space[j]);
			free(space);
			return (NULL);
		}
	}
	return (space);
}
