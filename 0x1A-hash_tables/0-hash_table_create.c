#include "hash_tables.h"

/**
 * hash_table_create - Creates
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL or pointer if true
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int w;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (w = 0; w < size; w++)
		ht->array[w] = NULL;

	return (ht);
}
