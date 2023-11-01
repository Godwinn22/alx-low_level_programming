#include "main.h"

/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: the specific character.
 * Return: null if size = 0, and
 * Returns a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(c));
	if (size == 0)
	{
		return (NULL);
	}
	else if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
