#include "hash_tables.h"

/**
 * hash_table_print - ...
 * @ht: ...
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	unsigned char sep = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (sep == 1)
			{
				printf(", ");
			}
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
				{
					printf(", ");
				}
			}
			sep = 1;
		}
		i++;
	}
	printf("}\n");
}
