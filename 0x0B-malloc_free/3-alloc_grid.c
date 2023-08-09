#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - Allocates a 2D array of integers
 *@width: Number of columns
 *@height: Number of rows
 *
 *Return: Pointer to the allocated 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **mtrx;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mtrx = (int **) malloc(height * sizeof(int *));
	if (mtrx == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mtrx[i] = (int *) malloc(width * sizeof(int));
		if (mtrx[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(mtrx[j]);
			free(mtrx);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mtrx[i][j] = 0;
		}
	}

	return (mtrx);
}
