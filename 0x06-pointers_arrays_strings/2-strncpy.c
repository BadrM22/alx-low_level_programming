#include "main.h"

/**
 * _strncpy - Function to copy n bytes of a string to another string
 * @dest: destination of coppied string
 * @src: string to be copied
 * @n: number of bytes to be copied from @src to @dest
 *
 * Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
