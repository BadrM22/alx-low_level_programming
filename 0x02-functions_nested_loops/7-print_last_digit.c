#include "main.h"

/**
 * print_last_digit - Function to print last number of an integer
 * @n: input number
 *
 * Return: int
 */

int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
