#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *new_value_copy;
	unsigned long int index_long, num;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_value_copy = strdup(value);
	if (new_value_copy == NULL)
		return (0);

	index_long = key_index((const unsigned char *)key, ht->size);
	for (num = index_long; ht->array[num]; num++)
	{
		if (strcmp(ht->array[num]->key, key) == 0)
		{
			free(ht->array[num]->value);
			ht->array[num]->value = new_value_copy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = new_value_copy;
	new_node->next = ht->array[index_long];
	ht->array[index_long] = new_node;

	return (1);
}
