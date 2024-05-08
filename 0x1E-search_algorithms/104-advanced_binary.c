#include "search_algos.h"

/**
 * rec_search - this function searches for a value
 * in a sorted array of integers.
 *
 *
 * @array: the input array
 * @size: the size of the array
 * @value: the value to search in
 * Return: returns the index of the number
 */
int rec_search(int *array, size_t size, int value)
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
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - theis function calls to rec_search to return
 * the index of the number.
 *
 * @array: the input array
 * @size: the size of the array
 * @value: the value to search in
 * Return: returns the index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = rec_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
