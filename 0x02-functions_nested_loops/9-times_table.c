#include "main.h"

/**
 * times_table - Function to print 9 times table
 * Return: void
 */

void times_table(void)
{
	int x, y;

	int mult = 0;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			mult = x * y;

			if (mult < 10)
			{
				if (y != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + mult);
			}
			else
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar('0' + (mult % 10));
			}
			if (y != 9)
			{
				_putchar(',');
			}
		}
		_putchar('/n');
	}
}

