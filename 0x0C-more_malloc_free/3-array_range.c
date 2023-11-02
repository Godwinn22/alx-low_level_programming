#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 * @min: the smallest integer
 * @max: the largest integer
 * Return: returns the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i, j;
	int *result;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;
	result = malloc(j * sizeof(int));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		result[i] = min;
		min++;
	}
	return (result);
}
