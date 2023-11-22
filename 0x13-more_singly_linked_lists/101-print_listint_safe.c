#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	if (!head)
	{
		printf("Empty list\n");
		exit(98);
	}
	while (current != NULL)
	{
		printf("%d ", current->n);
		current = current->next;
		count++;
	}
	printf("\n");
	return (count);
}
