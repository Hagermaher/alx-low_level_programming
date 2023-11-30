#include "hash_tables.h"

/**
 * hash_table_get - Retrieve value
 * @ht: pointer
 * @key: The key
 * Return: If the key not matched - NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[indx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
