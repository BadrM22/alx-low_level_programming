#include "main.h"

/**
 * print_sign - Function to print sign of a number
 * @n: input number to check sign
 *
 * Return: 1 if +ve, 0 is zero and -1 if -ve.
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	_putchar(48);
	return (0);
}

