#include "holberton.h"

/**
 * _calloc - allocate nmemb of size
 * @nmemb: number of elements
 * @size: size of the type
 * Return: the pointer to the memory reserved
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)
		*((char *)ptr + i) = 0;
	return (ptr);
}
