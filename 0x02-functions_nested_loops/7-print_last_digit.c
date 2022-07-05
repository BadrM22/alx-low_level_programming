#include "main.h"

/**
 * print_last_digit - Function to print last number of an integer
 * @n: input number
 *
 * Return: int
 */

int print_last_digit(int n)
{
	x %= 10;

	if (x < 0)
	{
		x = _abs(x);
	}
	_putchar(x + '0');
	return (x);
}
