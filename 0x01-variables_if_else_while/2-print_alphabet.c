#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: alphabets in lowercase
 */

int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	
	return (0);
}
