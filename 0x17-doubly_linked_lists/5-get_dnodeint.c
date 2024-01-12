#include "lists.h"
/**
 * get_dnodeint_at_index - a function that adds a new
 * node at the beginning of a dlistint_t list.
 * @head : the head pointer of the node
 * @index: the index to return
 *
 * Return: returns the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
