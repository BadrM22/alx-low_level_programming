#include <stdio.h>

/**
 * main - Program to sum even value of a fibonacci sequence
 * Return: 0
 */

int main(void)
{
	int n = 0;
	int i = 0;
	int j = 1;
	int fib = 0;

	while (n < 10)
	{
		fib = i + j;

		if (fib % 2 == 0)
		{
			sum += fib;
		}
		i = j;

		j = fib;

		n++;
	}
	return (0);
}
