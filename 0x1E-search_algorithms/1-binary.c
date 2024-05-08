#include "search_algos.h"

/**
 * recursive_search - this function searches for a value in an array of
 * integers using the Binary search algorithm.
 *
 *
 * @array: the input array
 * @size: the size of the array
 * @value: the value to search in
 * Return: returns the index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");
	i = 0;
	while (i < size)
	{
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
		i++;
	}

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - this function calls to binary_search to return
 * the index of the number
 *
 * @array: the input array
 * @size: the size of the array
 * @value: the value to search in
 * Return: returns the index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
