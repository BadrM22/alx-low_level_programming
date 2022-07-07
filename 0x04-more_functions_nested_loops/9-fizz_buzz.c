#include "stdio.h"
#include "main.h"

/**
 * main - Program to print numbers from 0 to 100
 * Description: Prints numbers from 0 to 100 except
 * if the number divisible by 3 prints 'Fizz'.
 * else if the number divisible by 5 prints 'Buzz'
 * if divisible by both prints 'Fizz Buzz'
 * else prints the number.
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
