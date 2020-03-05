#include "holberton.h"

/**
 * malloc_checked - locates memory
 * @b: the size of the memory that want to be located
 * Return: pointer to the located memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
