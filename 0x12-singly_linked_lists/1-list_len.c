#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to the first element "head"
 * Return: returns the number of elements in a linked list_t list.
*/
size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		++elements;
		h = h->next;
	}
	return (elements);
}
