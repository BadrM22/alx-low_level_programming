#include <stdio.h>

/**
  * main - print all possible different combinations
  * of tow digits separated by comma then space
  *
  *Return: 0
  */

int main(void)
{
	int num1;

	int num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar('0' + ((num1 % 10)));
			putchar('0' + ((num2 % 10)));

			if (num1 == 8 && num2 == 9)
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
