#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash
 * @ht: A pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int w;

	for (w = 0; w < ht->size; w++)
	{
		if (ht->array[w] != NULL)
		{
			node = ht->array[w];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
