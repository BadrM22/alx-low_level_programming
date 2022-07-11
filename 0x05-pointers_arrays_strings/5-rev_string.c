#include "main.h"

/**
 * rev_string - Function to stdout reversed string
 * @s: input pointer to array of characters
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int len;

	len = sizeof(&s) / sizeof(*s);

	for (i = len; i <= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
