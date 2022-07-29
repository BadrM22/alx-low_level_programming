#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: on success a pointer to allocated memory
 * on fail exit with code 98
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
	{
		exit(98);
	}
	return (n);
}
