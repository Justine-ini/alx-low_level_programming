#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid
 * @grid: The grid to be freed
 * @height: The height of the grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL || height != 0)
	{
		while (i < height)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
	}
}
