#include "main.h"

/**
 * _strncat - Function that concatenates n bytes of a string
 * to another string
 * @dest: string to append to
 * @src: string to be appended
 * @n: number to bytes of @src to be appended to @dest
 *
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j) != '\0' && j < n)
	{
		dest[j + i] = *(src + j);
		j++;
	}
	return (dest);
}
