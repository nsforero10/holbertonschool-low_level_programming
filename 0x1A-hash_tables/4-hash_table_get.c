#include "hash_tables.h"

/**
 * hash_table_get - 1 if it succeeded, 0 otherwise
 * @ht: hs the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i;
	hash_node_t *crrnt;

	if (!ht || !key || !*key)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	crrnt = ht->array[i];

	while (crrnt)
	{
		if (!strcmp(key, crrnt->key))
			return (crrnt->value);
		crrnt = crrnt->next;
	}
	return (NULL);
}
