#include "dog.h"

/**
 * init_dog - Function that initalizes a variable of type struct dog
 * @d: input for a struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(98);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
