#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @list_head: head pointer
 * Return: void
 */

void free_listint(listint_t *list_head)
{
	listint_t *current_node;

	for (; list_head != NULL; list_head = current_node)
	{
		current_node = list_head->next;
		free(list_head);
	}
}
