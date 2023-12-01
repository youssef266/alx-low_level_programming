#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value of associated
 *              key.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 *  Return: the value associated with the element,
 *      or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int index_long;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index_long = key_index((const unsigned char *)key, ht->size);
	if (index_long >= ht->size)
		return (NULL);

	n = ht->array[index_long];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;

	return ((n == NULL) ? NULL : n->value);
}
