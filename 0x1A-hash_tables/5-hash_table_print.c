#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node_ht;
	unsigned long int num;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (num = 0; num < ht->size; num++)
	{
		if (ht->array[num] != NULL)
		{
			if (flag == 1)
				printf(", ");

			node_ht = ht->array[num];
			while (node_ht != NULL)
			{
				printf("'%s': '%s'", node_ht->key, node_ht->value);
				node_ht = node_ht->next;
				if (node_ht != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}