#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head : the head pointer of the node
 *
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL || head->next == NULL)
	{
		free(head);
		return;
	}
	current = head;
	while (current != NULL)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
