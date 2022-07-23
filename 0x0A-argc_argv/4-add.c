#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		if (strlen(argv[i]) == 1 && (*argv[i] < '0' || *argv[i] > '9'))
		{
			printf("Error\n");
			return (1);
		}
		if (strlen(argv[i]) > 2)
		{
			sum += atof(argv[i]);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
END:
	printf("%d\n", sum);
	return (0);
}
