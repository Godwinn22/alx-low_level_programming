 #include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head pointer
 *
 * Description:
 * This function frees the memory allocated for a linked list.
 * It iterates through the list, frees each node, and sets the head to NULL.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head || !*head)
		return;
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}
