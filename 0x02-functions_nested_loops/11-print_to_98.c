#include "main.h"

/**
 * print_to_98 - Function to print natural numbers to 98.
 * @n: input number to start from
 *
 * Description: Print natural numbers from n to 98
 * if n is greater than 98 will print in descending order
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d\n", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d\n", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
