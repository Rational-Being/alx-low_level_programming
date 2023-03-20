#include <stdlib.h>
#include "dog.h"

/**
 *  *using struct dog.
 *   *@d: Dog structure.
 *    *@name: Name of dog
 *     *@age: Age of dog
 *      *@owner: Who owns the dog
 *       */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d != NULL)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
}
