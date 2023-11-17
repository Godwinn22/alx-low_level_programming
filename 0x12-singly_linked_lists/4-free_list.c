#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to the first element "head"
 */
void free_list(list_t *head)
{
	list_t *current_element;

	while ((current_element = head) != NULL)
	{
		head = head->next;
		free(current_element->str);
		free(current_element);
	}
}
