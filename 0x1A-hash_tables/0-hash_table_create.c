#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table, NULL if something fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	h = malloc(sizeof(hash_table_t));
	if (!h)
		return (NULL);

	h->size = size;
	h->array = calloc(size, sizeof(hash_node_t *));
	if (!h->array)
		return (free(h), NULL);

	return (h);
}