#include "main.h"

/**
 * free_grid - free alloc grid
 * @grid: grid to be freed
 * @height: height grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	free(grid[height]);
	free(grid);
}
