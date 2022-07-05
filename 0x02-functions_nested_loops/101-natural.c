#include <stdio.h>

/**
 * main - Program to compute and prints the sum of all
 * multiplies of 3 or 5 below 1024
 * Return: Always 0
 */

int main(void)
{
	int sum = 0;

	int multi = 0;

	while ( multi < 1024)
	{
		if (multi % 3 == 0 || multi % 5 == 0)
		{
			sum += multi;
		}
		mult++;
	}
	printf("%d\n", sum);
	return (0);
}
