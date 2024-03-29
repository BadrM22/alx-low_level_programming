#include "main.h"

/**
 * _strdup - Function that return a pointer to a newly allocated space
 * in memmory, which contains a copy of a string given as a parameter
 * @str: string to copy
 *
 * Return: char pointer on success else null
 */

char *_strdup(char *str)
{
	char *s = NULL;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	s = (char *) malloc((strlen(str) + 1) * (size_t)sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (*(str + i))
	{
		s[i] = *(str + i);
		i++;
	}
	s[i] = *(str + i);
	return (s);
}
