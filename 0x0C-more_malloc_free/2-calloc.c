#include "main.h"

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: the number of elements in array
 * @size: the size of the array
 * Return: returns a pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	result = calloc(nmemb, size);
	if (result == NULL)
	{
		return (NULL);
	}
	else
	{
		return (result);
	}
}
