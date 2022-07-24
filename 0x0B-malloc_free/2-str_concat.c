#include "main.h"

/**
 * str_concat - Function that allocate new memory for two
 * concatenated strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer on success else null
 */

char *str_concat(char *s1, char *s2)
{
	char *s = NULL;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = (char *) malloc((strlen(s1) + strlen(s2)) * sizeof(char));
	if (!s)
	{
		return (NULL);
	}
	i = 0;

	while (*(s1 + i))
	{
		s[i] = *(s1 + i);
		i++;
	}
	j = 0;

	while (*(s2 + j))
	{
		s[i + j] = *(s2 + j);
		j++;
	}
	s[i + j + 1] = '\0';
	return (s);
}
