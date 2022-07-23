#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print the result of multiplying
 * two numbers
 * @argc: count of commandline argumnets
 * @argv: command line argumnets
 *
 * Return: 0 on success else 1
 */

int main(int argc, char **argv)
{
	int n1, n2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
		return (0);

}
