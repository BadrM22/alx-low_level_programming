#include "main.h"

/**
 * alloc_grid - Function to allocate memory for a 2D array
 * and initialize it elements to zero
 * @width: innter array size
 * @height: outter array size
 *
 * Return: pointer on success else null
 */

int **alloc_grid(int width, int height)
{
	int i, j, **matrix = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = (int **) malloc(height * sizeof(int *));

	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *) malloc(width * sizeof(int));
	}
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			matrix[j][i] = 0;
		}
	}
	return (matrix);
}
