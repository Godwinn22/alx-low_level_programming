#include "hash_tables.h"

/**
 * shash_table_create - the function that creates
 * @size: the size
 * Return: returns the ht
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{	ht->array[i] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}


/**
 * shash_table_set - function that sets the table
 * @ht: the hash table implement
 * @key: the key
 * @value: the value key
 * Return: returns  1 if it was set, otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	char *copied_value;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	copied_value = strdup(value);
	if (copied_value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = copied_value;
			return (1);
		}
		temp = temp->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(copied_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(copied_value);
		free(new_node);
		return (0);
	}
	new_node->value = copied_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
		{
			temp = temp->snext;
		}
		new_node->sprev = temp;
		new_node->snext = temp->snext;
		if (temp->snext == NULL)
		{
			ht->stail = new_node;
		}
		else
		{
			temp->snext->sprev = new_node;
		}
		temp->snext = new_node;
	}
	return (1);
}


/**
 * shash_table_get - the function that gets the table
 * @ht: the hash table implement
 * @key: the key
 * Return: returns the node gotten
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
	{
		node = node->snext;
	}
	return ((node == NULL) ? NULL : node->value);
}


/**
 * shash_table_print - function that prints in the table
 * @ht: teh hash table implement
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - for reversing
 * @ht: tyeh hash table implement
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}


/**
 * shash_table_delete - this deletes from the table
 * @ht: the hash table implement
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
	{
		return;
	}
	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(head->array);
	free(head);
}