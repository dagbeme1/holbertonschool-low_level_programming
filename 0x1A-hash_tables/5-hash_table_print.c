#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned long int idx;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (i == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			i = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
