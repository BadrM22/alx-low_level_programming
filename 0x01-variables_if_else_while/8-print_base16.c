#include <stdio.h>

/**
  * main - print all the numbers of base 16 in lowercase
  *
  *Return: 0
  */

int main(void)
{
	int n;

	char c;

	for (; n < 10; n++)
	{
		putchar('0' + ((n % 10)));
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}

