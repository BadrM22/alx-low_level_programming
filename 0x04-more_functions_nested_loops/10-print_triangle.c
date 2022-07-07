#include "main.h"

/**
 * print_triangle - Function to print a triangle shape of '#'
 * @size: input for triangle size
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			if ( j <= (size - i))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
