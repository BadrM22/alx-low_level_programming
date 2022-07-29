#include "main.h"

/**
 * array_range - Function to allocate memmory for an array of int
 * @min: min int
 * @max: max int
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (; min <= max; min++)
	{
		arr[i] = min;
		++i;
	}
	return (arr);
}
