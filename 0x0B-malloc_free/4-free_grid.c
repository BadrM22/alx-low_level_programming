#include "main.h"

/**
 * free_grid - function to free memory location of a 2-D array
 * @grid: 2-D array to be freed
 * @height: length of @grid
 *
 * Return: void
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
