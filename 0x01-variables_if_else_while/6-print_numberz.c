#include <stdio.h>

/**
  * main - print all single digit numbers
  * of base 10 starting from 0
  * Return: Always 0
  */

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar('0' + ((i % 10)));
	}

	putchar('\n');

	return (0);
}
