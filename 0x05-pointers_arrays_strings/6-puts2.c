#include "main.h"

/**
 * puts2 - function that prints every other character
 * @str: string input
 *
 * Return: void
 */

void puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i+=2;
	}
	putchar('\n');
}