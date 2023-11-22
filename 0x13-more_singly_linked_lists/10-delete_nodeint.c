#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 *
 * Description: where index is the index of the
 * node that should be deleted. Index starts at 0
 * @head: pointer to the head of the list
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *tmp;
	if (!head || !*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && index > 0)
	{
		tmp = current;
		current = current->next;
		index--;
	}
	if (current == NULL)
	{
		return (-1);
	}
	tmp->next = current->next;
	free(current);
	return (1);
}
