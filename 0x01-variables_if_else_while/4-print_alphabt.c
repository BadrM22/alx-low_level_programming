#include <stdio.h>

/**
  * main - print all alphabet in lowercase except 'q' and 'e'
  *Return: 0
  */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;

		if (c == 'q' || c == 'e')
		{
			++c;
			continue;
		}
	}

	putchar('\n');

	return (0);

}
