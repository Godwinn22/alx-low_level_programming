#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head : the head pointer of the node
 *
 * Return: returns the sum of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (!current)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
