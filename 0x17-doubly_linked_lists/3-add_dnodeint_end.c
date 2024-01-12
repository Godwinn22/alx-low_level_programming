#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new
 * node at the end of a dlistint_t list.
 * @head : the head pointer of the node
 * @n: the lists data
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *tp;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	tp = *head;
	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (tmp);
	}
	while (tp->next != NULL)
	{
		tp = tp->next;
	}
	tp->next = tmp;
	tmp->prev = tp;
	return (tmp);
}
