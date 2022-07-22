#include <stdio.h>

/**
 * main - Program that it's name
 * @argc: count of command line arguments
 * @argv: command line arguments
 * Return: 0 if success else 1
 */

int main(int argc, char **argv)
{
	if (argc != 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}
