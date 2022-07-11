#include "main.h"

/**
 * puts2 - function that prints every other character
 * @str: string input
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) == '\n')
		{
			continue;
		}
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
