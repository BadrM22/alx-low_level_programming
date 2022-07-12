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
		if (i % 2 == 0)
		{
			_putchar(*(s + i));
		}
		i++;
	}
	_putchar('\n');
}
