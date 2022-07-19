#include "main.h"

/**
 * _print_rev_recursion - Function to print a string in reverse
 * @s: input string to be reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
