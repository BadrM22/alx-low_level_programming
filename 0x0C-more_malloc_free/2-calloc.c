#include "main.h"

/**
 * _calloc - function that allocates memory
 * @nmemb: number of elements
 * @size: number of bytes to allocate to each element
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	arr = malloc(size * nmemb);

	if (nmemb == 0 || size == 0 || arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
