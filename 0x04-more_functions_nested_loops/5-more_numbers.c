#include "main.h"

/**
 * more_numbers - Function to print numbers from 0 to 14
 * 10 times.
 *Return: void
 */

void more_numbers(void)
{
	int count, num;

	count = 0;
	num = 0;

	while (count < 10)
	{
		while (num < 15)
		{
			if (num > 9)
			{
				_putchar('0' + (num / 10));
			}
			_putchar('0' + (num % 10));
			num++;
		}
		_putchar('\n');
		num = 0;
		count++;
	}
}
