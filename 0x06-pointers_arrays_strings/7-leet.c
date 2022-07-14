#include "main.h"

/**
 * leet - Function that encodes a string to leet
 * @s: string to be encoded
 *
 * Return: char pointer
 */

char *leet(char *s)
{
	int i;

	char m[5] = {'a', 'e', 'o', 't', 'l'};

	char M[5] = {'A', 'E', 'O', 'T', 'L'};

	int code[] = {4, 3, 0, 7, 1};

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == *(m + i) || *s == *(M + i))
			{
				*s = code[i];
			}
		}
		s++;
	}
	return (s);
}
