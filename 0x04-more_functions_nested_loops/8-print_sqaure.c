#include "main.h"

/**
 * print_square - Function to print square
 * @size: input number for square size
 *
 * Description: print a square of '#' where @size
 * is the size of square.
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
