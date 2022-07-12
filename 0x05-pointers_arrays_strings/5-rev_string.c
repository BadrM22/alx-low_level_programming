#include "main.h"

/**
 * rev_string - Function to stdout reversed string
 * @s: input pointer to array of characters
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int idx = 0;
	char tmp;

	while (s[idx])
	{
		len++;
		idx++;
	}
	--len;
	--idx;

	for (; idx >= (len / 2); idx--)
	{
		tmp = s[len - idx - 1];
		s[len - idx - 1] = s[idx];
		s[idx] = tmp;

	}
}
