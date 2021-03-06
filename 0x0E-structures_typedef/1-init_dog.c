#include "dog.h"
#include <stdio.h>
/**
 * init_dog - inits a dog
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
