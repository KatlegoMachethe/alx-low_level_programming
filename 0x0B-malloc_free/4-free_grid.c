#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free's a 2Dimensional grid
 * @grid: 1st integer argument
 * @height: 2nd integer argument
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int index;

	if (grid == NULL)
	{
		free(grid);
	}
	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
