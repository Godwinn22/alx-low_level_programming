#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to the head of the list
 *
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *removed_node;
	int node_data;

	if (!head || !*head)
	{
		return (0);
	}

	removed_node = *head;
	node_data = removed_node->n;
	*head = (*head)->next;
	free(removed_node);
	return (node_data);
}
