#include "main.h"

/**
 * *_strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: the string
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	char *copy;
	int size = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	copy = malloc(size * sizeof(char) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			copy[i] = str[i];
		}
	}
	return (copy);
}
