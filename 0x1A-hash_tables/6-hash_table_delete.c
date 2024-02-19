#include "hash_tables.h"

/**
 * hash_table_delete - ...
 * @ht: ...
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;
	hash_table_t *head = ht;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
		i++;
	}
	free(head->array);
	free(head);
}
