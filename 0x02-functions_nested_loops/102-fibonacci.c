#include <stdio.h>

int fib(int n);

/**
 * main - Program to print the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int x;
	
	for (x = 0; x < 51; x++)
	{
		printf("%d, ", fib(x));
	}
	return (0);
}

/**
 * fib - Function to return a fibonacci number
 * @n: input to get fib number
 *
 * Return: int
 */

int fib(int n)
{
	if (n < 2)
	{
		return (1);
	}
	return (fib(n - 1) + fib(n - 2));
}
