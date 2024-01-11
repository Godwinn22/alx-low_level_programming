#include "lists.h"

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list.
 * @h: the head pointer of the node
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t len = 0;

	while (tmp != NULL)
	{
		printf("%d", tmp->n);
		printf("\n");
		tmp = tmp->next;
		len++;
	}
	return (len);
}
