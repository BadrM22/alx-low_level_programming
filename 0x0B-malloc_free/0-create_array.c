#include "main.h"

/**
 * create_array - Function to create an array of characters
 * @size: positive integer number
 * @c: input character
 * Return: a char pointer if success else null
 */

char *create_array(unsigned int size, char c)
{
	if (size <= 0)
	{
		return (NULL);
	}
	return ((char *) malloc(size * sizeof(c)));
}
