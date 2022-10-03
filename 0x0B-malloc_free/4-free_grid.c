#include "main.h"

/**
 * free_grid - free the alloc_grid
 * @grid: grid we want to free from memory
 * @height: columns
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
	{
		return;
	}

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
