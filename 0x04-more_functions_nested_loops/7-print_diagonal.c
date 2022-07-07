#include "main.h"

/**
 * print_diagonal - Function to print diagonal.
 * @n: input integer for repition
 *
 * Description: Funtion to print diagonal of '\',
 * where @n is the count repition for '\'.
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

