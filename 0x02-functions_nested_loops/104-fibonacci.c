#include <stdio.h>

/**
 * main - Program to print the first 98 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int n = 0;
	int x = 1;
	int y = 2;
	unsigned long fib;

	while (n < 98)
	{
		fib = x + y;

		if (n != 97)
		{
			printf("%ld, ", fib);
		}
		else
		{
			printf("%ld\n", fib);
		}
		x = y;
		y = fib;
		n++;
	}
	return (0);
}
