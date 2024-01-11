#include "lists.h"

/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: the head pointer of the node
 *
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t len = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
