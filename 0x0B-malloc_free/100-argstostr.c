#include "main.h"

/**
 * argstostr - Function that concatenates all command line arguments
 * separated by a new line.
 * @ac: command line arguments count
 * @av: command line arguments pointer
 *
 * Return: pointer to a string
 */

char *argstostr(int ac, char **av)
{
	char *str = NULL;
	size_t i, j, idx = 0, len = 0;

	if (ac <= 1 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	len += ac;

	str = (char *) malloc(sizeof(char) * len);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			str[idx] = av[i][j];
			idx++;
		}
		if (str[idx] == '\0')
		{
			str[idx++] = '\n';
		}
	}
	return (str);
}
