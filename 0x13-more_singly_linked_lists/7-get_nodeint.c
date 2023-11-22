#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node required
 *
 * Description:
 * This function returns the nth node of a linked list.
 *
 * Return: the address of the node at the given index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (current_index < index)
	{
		if (!head)
		{
			return (NULL);
		}
		head = head->next;
		current_index++;
	}
	return (head);
}
