#include "search_algos.h"
#include <math.h>

/**
 * jump_search - this function searches for a value in an array of
 * integers using the Jump search algorithm.
 *
 * @array: the input array
 * @size: the size of the array
 * @value: the value to search in
 * Return: returns the index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int i, index, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	i = 0;
	while (prev <= index && prev < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		i++;
	}

	return (-1);
}
