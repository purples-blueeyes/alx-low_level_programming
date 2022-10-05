#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid
 * makes and frees space.
 * @width: width of grid
 * @height: height of grid
 *
 * Return: 0 (On failure) or NULL (If width or height is 0 or negative)
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int l, m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (l = 0; l < height; l++)
	{
		grid[l] = malloc(sizeof(int) * width);

		if (grid[l] == NULL)
		{
			for (l = l - 1; l >= 0; l--)
			{
				free(grid[l]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (l = 0; m < width; m++)
		grid[l][m] = 0;
	return (grid);
}
