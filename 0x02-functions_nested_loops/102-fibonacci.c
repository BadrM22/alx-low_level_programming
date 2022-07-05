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

	unsigned long fib;

	for (x = 0; x < 50; x++)
	{
		fib = i + j;

		if (x != 49)
		{
			printf("%lu, ", fib);
		}
		else
		{
			printf("%lu\n", fib);
		}
		i = j;

		j = fib;

	}
	return (0);
}
