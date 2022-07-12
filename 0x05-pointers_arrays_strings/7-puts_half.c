#include "main.h"

/**
 * puts_half - stdout the second half of a string
 * @str: string input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int size, half;

	size = 0;

	while (*(str + size))
	{
		size++;
	}
	half = size / 2;

	while (half < size)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}
