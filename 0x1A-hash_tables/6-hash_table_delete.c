#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *header = ht;
	hash_node_t *node_ht, *temporary;
	unsigned long int num;

	for (num = 0; num < ht->size; num++)
	{
		if (ht->array[num] != NULL)
		{
			node_ht = ht->array[num];
			while (node_ht != 0)
			{
				temporary = node_ht->next;
				free(node_ht->key);
				free(node_ht->value);
				free(node_ht);
				node_ht = temporary;
			}
		}
	}
	free(header->array);
	free(header);
}
