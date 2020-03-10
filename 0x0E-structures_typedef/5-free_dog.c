#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - create a new dog
 * @d: new dog's nam
 * Return: void
 */
void free_dog(dog_t *d);
{
	if (!*d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
