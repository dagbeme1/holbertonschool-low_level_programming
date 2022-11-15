#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */


void hash_table_delete(hash_table_t *ht)
{
	unsigned int idx;
	hash_node_t *list;

	for (idx = 0; idx < ht->size; idx++)
	{
		while (ht->array[idx] != NULL)
		{
			list = ht->array[idx]->next;
			free(ht->array[idx]->value);
			free(ht->array[idx]->key);
			free(ht->array[idx]);
			ht->array[idx] = list;
		}
	}
	free(ht->array);
	free(ht);
}
