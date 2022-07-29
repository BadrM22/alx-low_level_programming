#include "main.h"

/**
 * _realloc - Function to add bytes toan old pointer
 * @ptr: previously allocated memory
 * @old_size: size of @ptr in bytes
 * @new_size: size of new bytes to add
 *
 * Return: pointer on success else NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (p);
	}
	for (i = 0; i < new_size; i++)
	{
		*(p + i) = (char) p[i];
	}
	free(ptr);
	return (p);
}
