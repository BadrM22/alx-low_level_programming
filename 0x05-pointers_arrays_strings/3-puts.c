#include "main.h"

/**
 * _puts - function to print a string followed by a new line
 * @str: input pointer to a string
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
