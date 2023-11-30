#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *  and handling the size.
 * @size: The size of the array with
 *  unsigned long int.
 *
 * Return: If some thing went wrong- NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int num;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
		return (NULL);
	for (num = 0; num < size; num++)
		h_table->array[num] = NULL;

	return (h_table);
}
