#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * free_grid - free memory of array
 *@grid: the width of array
 *@height: The height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
