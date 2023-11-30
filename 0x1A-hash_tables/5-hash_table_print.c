#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: pointer
 * Description: Key/value pairs are printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int w;
	unsigned char cf;

	cf = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (w = 0; w < ht->size; w++)
	{
		if (ht->array[w] != NULL)
		{
			if (cf == 1)
				printf(", ");

			node = ht->array[w];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			cf = 1;
		}
	}
	printf("}\n");
}
