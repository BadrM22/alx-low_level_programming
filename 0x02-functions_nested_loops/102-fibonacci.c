#include <stdio.h>

int fib(int n);

/**
 * main - Program to print the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int x;

	int i = 0;

	int j = 1;

	int fib = 0;

	for (x = 0; x < 51; x++)
	{
		fib = i + j;

		if (x != 49)
		{
			printf("%d, ", fib);
		}
		else
		{
			printf("%d\n", fib);
		}
		i = j;

		j = fib;

		x++;
	}
	return (0);
}
