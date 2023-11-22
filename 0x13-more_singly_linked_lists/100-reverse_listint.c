#include "lists.h"

/**
 * *reverse_listint - a function that reverses a listint_t linked list.
 *
 * Description: You are not allowed to use more than 1 loop
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 * @head: pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);
}
