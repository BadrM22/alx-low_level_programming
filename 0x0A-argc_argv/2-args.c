#include <stdio.h>

/**
 * main - Program to print all command line argumnets
 * @argc: count of command line argumnets
 * @argv: command line argumnets
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	(void) argc;

	while (*argv && count == 2)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
