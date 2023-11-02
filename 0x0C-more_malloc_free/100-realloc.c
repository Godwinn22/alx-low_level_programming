#include "main.h"

/**
 * *_realloc - a function that reallocates a
 * memory block using malloc and free
 * @old_size: the old size
 * @new_size: the new size
 * @ptr: the old pointer
 * Return: returns the reallocated ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned int max = new_size;
	char *result;
	char *old_result = ptr;

	if (ptr == NULL)
	{
		result = malloc(new_size);
		return (result);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	result = malloc(new_size);
	if (result == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		max = old_size;
	}
	for (i = 0; i < max; i++)
	{
		result[i] = old_result[i];
	}
	free(ptr);
	return (result);
}
