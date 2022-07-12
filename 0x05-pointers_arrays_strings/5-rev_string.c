#include "main.h"

/**
 * rev_string - Function to stdout reversed string
 * @s: input pointer to array of characters
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;

	i = 0;

	while (*(s + i))
	{
		i++;
	}
	--i;
	while (i >= 0)
	{
		*s = *(s + i);
		i--;
	}
}
