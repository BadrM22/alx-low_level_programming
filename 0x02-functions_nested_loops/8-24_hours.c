#include "main.h"

/**
 * jack_bauer - Function to print envery minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0;

	int m;

	while (h <= 23)
	{
		m = 0;

		while (m <= 59)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');

			m++;
		}
		h++;
	}
}
