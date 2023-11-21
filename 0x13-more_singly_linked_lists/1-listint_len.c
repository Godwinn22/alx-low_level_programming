#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list.
 * @h: head pointer
 * Return: returns the number of elements in a linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t element_count = 0;

	for (; h != NULL; h = h->next)
	{
		element_count++;
	}
	return (element_count);
}
