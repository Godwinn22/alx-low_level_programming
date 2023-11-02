#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * @b: size of allocated memory
 * Return: returns a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);
	if (result == NULL)
	{
		exit(98);
	}
	else
	{
		return (result);
	}
}
