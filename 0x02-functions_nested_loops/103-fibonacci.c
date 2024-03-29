#include <stdio.h>

/**
 * main - Program to sum even value of a fibonacci sequence
 * Return: 0
 */

int main(void)
{
	int n = 0;
	int i = 1;
	int j = 2;
	int fib = 0;
	int sum = 0;

	while (n < 4000000)
	{
		fib = i + j;

		if (fib < 4000000 && fib % 2 == 0)
		{
			sum += fib;
		}
		i = j;

		j = fib;

		n++;
	}
	printf("%d\n", sum);
	return (0);
}
