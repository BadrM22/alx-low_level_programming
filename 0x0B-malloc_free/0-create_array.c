#include "main.h"

/**
 * create_array - Function to create an array of characters
 * @size: positive integer number
 * @c: input character
 * Return: a char pointer if success else null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr;
	
	if (size <= 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
