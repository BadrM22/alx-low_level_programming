#include "main.h"

/**
 * puts_half - stdout the second half of a string
 * @str: string input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int str_len, n, i;

	str_len = 0;
	i = 0;

	while (*(str + i))
	{
		str_len++;
		i++;
	}
	n = (str_len - 1) / 2;

	while (n < str_len)
	{
		_putchar(*(str + n));
		n++;
	}
	if (*str != '\n')
	{
		_putchar('\n');

	}
}
