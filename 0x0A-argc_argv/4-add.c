#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	if (argc < 2)
	{
		goto END;
	}
	for (i = 1; i < argc; i++)
	{
		if (strlen(argv[i]) > 1)
		{
			for (j = 0; j < *argv[i]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					goto EXIT_ERROR;
				}
				if (j == (int)(strlen(argv[i]) - 1))
				{
					break;
				}
			}
		}
		else if (!isdigit(*argv[i]))
		{
EXIT_ERROR:
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

END:
	printf("%d\n", sum);
	return (0);
}
