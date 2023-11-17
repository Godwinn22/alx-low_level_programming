#include "lists.h"

/**
 * *add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: pointer to the first element "head"
 * @str: pointer to the added element
 * Return: returns the number of elements in a linked list_t list.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	size_t i, count = 0;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
	{
		return (NULL);
	}

	new_element->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	new_element->len = count;
	new_element->next = (*head);
	(*head) = new_element;
	return ((*head));
}
