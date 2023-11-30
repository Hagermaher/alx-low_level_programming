#include "hash_tables.h"

/**
 * hash_table_set - Add or modify an element
 * @ht: A pointer
 * @key: The key
 * @value: The value
 * Return: Upon failure 0 other -1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw;
	char *vc;
	unsigned long int indx, w;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	vc = strdup(value);
	if (vc == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	for (w = indx; ht->array[w]; w++)
	{
		if (strcmp(ht->array[w]->key, key) == 0)
		{
			free(ht->array[w]->value);
			ht->array[w]->value = vc;
			return (1);
		}
	}

	nw = malloc(sizeof(hash_node_t));
	if (nw == NULL)
	{
		free(vc);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(nw);
		return (0);
	}
	nw->value = vc;
	nw->next = ht->array[indx];
	ht->array[indx] = nw;

	return (1);
}
