#include "main.h"

/**
 * print_rev - takes a pointer to a string ad reverse string to stdout
 * @s: input pointer to a string
 *
 * Return void
 */

void print_rev(char *s)
{
	int idx = 0;

	while (*(str + idx))
	{
		idx++;
	}
	idx -= 1;
	while (idx >= 0)
	{
		_putchar(*(s + idx));
		idx--;
	}
	_putchar('\n');
}
