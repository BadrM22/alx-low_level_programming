#include <stdio.h>

/**
  * main - print combinations of single digit number
  * separated by comma
  *
  *Return: 0
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + ((i % 10)));
		if (i == 9)
		{
			continue;
		}
		putchar(',');

		putchar(' ');
	}

	putchar('\n');

	return (0);
}
