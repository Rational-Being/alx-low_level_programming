#include "dog.h"
#include <stddef.h>

/**
 * init_dog - a function that initalize a variable of type struct dog
 * @d: struct dog to initailize
 * @name: Dog's name
 * @age: dog age
 * @owner: dog's owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
