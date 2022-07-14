#include "main.h"

/**
 * reverse_array - Function to reverse an array of integers
 * @a: array
 * @n: length of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
