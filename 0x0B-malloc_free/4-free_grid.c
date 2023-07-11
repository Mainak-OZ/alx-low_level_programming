#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: 2d grid
 * @h: height dimension of grid
 * Description: frees memory of grid
 * Return:
 */

void free_grid(int **grid, int h)

{
	int i;

	for (i = 0; i < h; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
