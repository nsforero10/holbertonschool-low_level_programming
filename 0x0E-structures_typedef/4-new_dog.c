#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen - calcualtes the length of a string
 * @p: char to messure
 * Return: the length of the string
 */
int _strlen(char *p)
{
	return ((!*p) ? (1) : (1 + _strlen(++p)));
}


/**
 * new_dog - create a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *cpname, *cpowner;
	int i;

	cpname = malloc(_strlen(name));
	if (!cpname)
		return (NULL);
	for (i = 0; *name; i++)
	{
		*cpname = *name;
		cpname++, name++;
	}
	*cpname = '\0';
	cpname -= i;
	cpowner = malloc(_strlen(owner));
	if (!cpowner)
	{
		free(cpname);
		return (NULL);
	}
	for (i = 0; *owner; i++)
	{
		*cpowner = *owner;
		cpowner++, owner++;
	}
	*cpowner = '\0';
	cpowner -= i;
	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(owner);
		free(name);
		return (NULL);
	}
	dog->name = cpname;
	dog->age = age;
	dog->owner = cpowner;
	return (dog);
}
