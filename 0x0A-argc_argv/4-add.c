#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers
 * @argc: command line counts
 * @argv: command line argumnets
 *
 * Description - The program will add all numbers
 * Return: 0 on success, 1 if one of the argumnets are not
 * a number
 */

int main(int argc, char **argv)
{
	int sum;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else if (argc > 1)
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
