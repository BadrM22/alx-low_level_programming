#include "main.h"

/**
 * _strcat - Function to append a string to another string
 * @src: src string to append
 * @dest: destination string to append to
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j))
	{
		dest[i + j] = *(src + j);
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
