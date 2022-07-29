#include "main.h"

/**
 * string_nconcat - Function that point to a newly allocated space
 * in memory which contains a string followed by n bytes of another
 * string
 * @s1: first string
 * @s2: second string to concatenate
 * @n: number of bytes to concatenate
 *
 * Return: pointer on success else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *str;
	size_t s1_len;
	size_t s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	str = malloc(sizeof(*str) * s1_len + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < (s1_len + n); i++)
	{
		if (i < s1_len)
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[j++];
		}
	}
	str[i] = '\0';
	return (str);
}
