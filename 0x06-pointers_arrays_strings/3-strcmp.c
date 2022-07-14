#include "main.h"

/**
 * _strcmp - Funtion to compare to string
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if success else greater than zero if fail
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;

	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
	}
	return (j);
}
