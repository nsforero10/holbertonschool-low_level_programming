#include "hash_tables.h"

/**
 * hash_table_set -
 *
 * Return: 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *cp;
	unsigned long int i = 0, index;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	cp = strdup(value);
	if (!cp)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp;
			return (1);
		}
		i++;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (free(cp), 0);
	new->key = strdup(key);
	if (!new->key)
		return (free(new), 0);
	new->value = cp;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}