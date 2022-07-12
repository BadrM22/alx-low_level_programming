#include "main.h"

/**
 * rev_string - Function to stdout reversed string
 * @s: input pointer to array of characters
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char string_rev[500];

	i = 0;
	j = 0;

	while (*(s + i))
	{
		*(string_rev + i) = *(s + i);
		i++;
	}
	--i;
	while (i >= 0)
	{
		*(s + i) = *(string_rev + j);
		j++;
		i--;
	}
}
