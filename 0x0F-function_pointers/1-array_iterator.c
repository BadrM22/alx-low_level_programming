#include "function_pointers.h"

/**
 * array_iterator - Functino that executes another function
 * given as a parameter on each element of an array
 * @array: input array
 * @size: length of array
 * @action: pointer to a function to be executed
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
