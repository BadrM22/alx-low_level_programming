#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @n - a generated random number
 *
 * checks wether @n is positive or negitive
 * return (0) (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	
	return (0);
}
