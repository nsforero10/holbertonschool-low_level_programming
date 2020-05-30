#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, n_el = 0;
	hash_node_t *crrnt;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		crrnt = ht->array[i];
		while (crrnt)
		{
			if (n_el++ > 0)
				printf(", ");
			printf("'%s': '%s'", crrnt->key, crrnt->value);
			crrnt = crrnt->next;
		}
		i++;
	}
	printf("}\n");
}
