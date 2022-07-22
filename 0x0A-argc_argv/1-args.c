#include <stdio.h>

/**
 * main - Program to print the count of command line arguments
 * @argc: count of command line arguments
 * @argv: command line argumnets
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	(void) argv;
	if (argc != 0)
	{
		-- argc;
		
		printf("%d\n", argc);

		return (0);
	}
	return (1);
}
