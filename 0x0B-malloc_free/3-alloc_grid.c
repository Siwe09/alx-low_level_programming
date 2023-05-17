#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int w;
	int h;
	int **grid = 0;

	w = 0, h = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	if (grid == NULL)
		return (NULL);

	w = 0;
	for (w = 0; w < height; w++)
	{
		grid[w] = (int *)malloc(width * sizeof(int));

		if (grid[w] == NULL)
		{
			h = 0;
			for (h = 0; h < w; h++)
			{
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}

		for (h = 0; h < width; h++)
		{
			grid[w][h] = 0;
		}
	}

	return (NULL);
}
