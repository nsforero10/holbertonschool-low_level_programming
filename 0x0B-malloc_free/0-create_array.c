#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - create an array with the an specified number
 * @size: the size of the array
 * @c: the char to initialize the array
 * Return:0 if something fails or size is 0, and a pointer if everything worksx
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr  = malloc(sizeof(c) * size);

	if (!ptr || size <= 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
