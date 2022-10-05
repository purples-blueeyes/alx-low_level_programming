#include "main.h"
#include <stdlib.h>

/**
 * free_grid - allocates a grid
 * makes and frees space.
 * @height: height of grid
 * @grid: takes in width of grid
 *
 * Return: frees grid.
 */

void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
	{
		free(grid[l]);
	}

	free(grid);
}
