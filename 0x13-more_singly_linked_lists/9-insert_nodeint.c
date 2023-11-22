#include "lists.h"

/**
 * sum_listint - a function that inserts a new node at a given position.
 *
 * Description: where idx is the index of the
 * list where the new node should be added. Index starts at 0
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 * @head: pointer to the head of the list
 * @idx: the index of the list
 * @n:
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *aux;
	unsigned int i;

	if (!head)
		return (NULL);
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	aux = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (aux == NULL)
			return (NULL);
		aux = aux->next;
	}
	if (aux == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = aux->next;
	aux->next = new_node;
	return (new_node);
}
