#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: head pointer
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t node_count;

	if (h == NULL)
		return (0);
	for (node_count = 0; h != NULL; node_count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}
