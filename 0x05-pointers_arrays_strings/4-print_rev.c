#include "main.h"

/**
 * print_rev - takes a pointer to a string ad reverse string to stdout
 * @s - input pointer to a string
 *
 * Return void
 */

void print_rev(char *s)
{
	while (*s++ != 0)
	{
		_putchar(*(s - 2));
	}
	_putchar('\n');
}
