#include "dog.h"

/**
 * print_dog - Function to print the values of struct dog
 * @d: struct dog input
 * 
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *NIL = "nil";
	if (d == NULL)
	{
		printf("(%s)\n", NIL);
	}
	if (d->name == NULL)
	{
		printf("(%s)\n", NIL);
	}
	printf("Name: %s\n", d->name);
	d->age != NULL ? printf("Age: %d\n", d->age) :"" ;
	printf("Owner: %s\n", d->owner);
}
