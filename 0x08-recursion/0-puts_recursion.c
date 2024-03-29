#include "main.h"

/**
 * _puts_recursion - Function that prints a string followed by a new line
 * @s: input string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
