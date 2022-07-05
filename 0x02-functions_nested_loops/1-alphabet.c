#include "main.h"
/**
  * print_alphabet -  function to print alphabet.
  * Description: print alphabet in lower case,
  * only 2 _putchar are allowed.
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

