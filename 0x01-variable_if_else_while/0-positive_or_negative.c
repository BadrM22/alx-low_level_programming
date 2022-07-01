#include <stdio.h>
#include <time.h>

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
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("zerp");
	}
	else
	{
		printf("is positive");
	}
	
	return (0);
}
