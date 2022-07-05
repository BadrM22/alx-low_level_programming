#include "_putchar.c"

void print_alphabet(void);

/**
 * print_alphabet: prints alphabet characters in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

