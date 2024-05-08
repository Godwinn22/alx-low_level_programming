#include "search_algos.h"

/**
 * linear_search - this function searches for a value in an array of
 * integers using the Linear search algorithm.
 *
 * @array: the input array
 * @size: the size of the array
 * @value: the value to search in
 * Return: Always 0
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	i = 0;
	while (i < (int)size)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}
	return (-1);
}
