#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table.
 * @ht: Hhash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *node, *tmp;
	unsigned long int i = 0;

	while (i < h->size)
	{
		if (h->array[i] != NULL)
		{
			node = h->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
