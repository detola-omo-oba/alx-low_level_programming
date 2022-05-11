#include <stdio.h>
#include "dog.h"
#define NIL "(nil)"
/**
 * print_dog - prints content
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = NIL;
	if (d->owner == NULL)
		d->owner = NIL;
	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
