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
	return (!*p) ? (0) : (1 + _strlen(++p));
}


/**
 * print_dog - print a dog atributes
 * @d: dog
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *cpname;
	char *cpowner;
	int i, szname = _strlen(name);

	printf("%d\n",szname);

	cpname = malloc(szname + 1);
	printf("after cpname");
	if (!cpname)
	{
		free(cpname);
		return (NULL);
	}
	for (i = 0; *name; i++)
	{
		*cpname = *name;
		cpname++, name++;
	}
	cpname = '\0';
	cpname -= i;
	name -= i;
	cpowner = malloc(_strlen(owner) + 1);
	if (!cpowner)
	{
		free(cpname);
		free(cpowner);
		return (NULL);
	}
	for (i = 0; *owner ;i++)
	{
		*cpowner = *owner;
		cpowner++, owner++;
	}
	cpowner = '\0';
	cpowner -= i;
	owner -= i;
	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(owner);
		free(name);
		free(dog);
		return (NULL);
	}
	dog->name = cpname;
	dog->age = age;
	dog->owner = cpowner;
	return (dog);
}
