#include "hash_tables.h"

/**
 * hash_table_create -creates a hash table.
 * @size: size of the array
 * Return: null if error, otherwise Pointer to the array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int i = 0;

	h = malloc(sizeof(hash_table_t));
	if (!h)
		return (NULL);

	h->size = size;
	h->array = malloc(sizeof(hash_table_t *) * size);
	if (!h->array)
		return (NULL);
	while (i < size)
		h->array[i] = NULL, i++;
	return (h);
}
