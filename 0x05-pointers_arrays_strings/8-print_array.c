#include <stdio.h>

/**
 * print_array - Function to print elements of an array
 * @a: array
 * @n: size of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
