#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - Frees memory allocated for a 2D array
 *@grid: Pointer to the 2D array
 *@height: Number of rows
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
