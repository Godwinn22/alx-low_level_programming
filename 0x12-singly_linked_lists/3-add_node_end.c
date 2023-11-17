#include "lists.h"

/**
 * *add_node_end - a function that adds a new
 * node at the end of a list_t list.
 * @head: pointer to the first element "head"
 * @str: pointer to the added element
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element, *tmp;
	size_t i, count = 0;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);
	new_element->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_element->len = count;
	new_element->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = new_element;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_element;
	}
	return (new_element);
}
