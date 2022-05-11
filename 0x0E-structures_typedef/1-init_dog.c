#include "dog.h"
#include <stddef.h>

/**
 * init_dog - inits a variable
 * @d: dog identification
 * @name: name of dog
 * @age: age of dog
 * @owner: owwner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
