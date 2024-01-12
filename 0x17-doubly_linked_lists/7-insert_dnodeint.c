#include "lists.h"

/**
 * create_node - a function that
 * craetes a new node.
 * @data: the lists data
 *
 * Return:  returns the created the node
 */
dlistint_t *create_node(int data)
{
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = data;
	node->prev = NULL;
	node->next = NULL;

	return (node);
}

/**
 * insert_dnodeint_at_index - a function that
 * inserts a new node at a given position.
 * @h : the head pointer of the node
 * @n: the lists data
 * @idx: the osition to insert
 *
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = create_node(n);
	dlistint_t *current = *h;

	if (h == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (idx > 1 && current != NULL)
	{
		current = current->next;
		idx--;
	}

	if (idx > 1 || current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
