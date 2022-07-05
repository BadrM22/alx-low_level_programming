#include <stdio.h>

int fib(int n);

/**
 * main - Program to print the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int x = 0;

	int i = 0;

	int j = 1;

	long fib;

	while (x < 50)
	{
		fib = i + j;

		if (x != 49)
		{
			printf("%ld, ", fib);
		}
		else
		{
			printf("%ld\n", fib);
		}
		i = j;
		j = fib;
		x++;
	}
	return (0);
}
