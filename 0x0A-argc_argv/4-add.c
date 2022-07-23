#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i, sum;

	if (argc == 1)
	{
		goto END;
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
END:
	printf("%d\n", sum);
	return (0);
}
