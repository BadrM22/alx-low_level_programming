#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: name to be printed
 * @f: pointer to a function that printsthe name
 * in a specific way
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
