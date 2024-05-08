#include "search_algos.h"

/**
 * recursive_search - this function searches for a value in an array of
 * integers using the Binary search algorithm
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

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

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
	int i;

	i = recursive_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}

/**
 * exponential_search - this function searches for a value in an array of
 * integers using the Exponential search algorithm
 *
 * @array: the input array
 * @size: the size of the array
 * @value: the value to search in
 * Return: returns the index of the number
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, next;
	int result;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;

	while (array[i] < value && i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		i *= 2;
	}

	next = (i >= size) ? (size - 1) : i;

	i /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)i, (int)next);

	result = binary_search(array + i, (next + 1) - i, value);

	if (result >= 0)
		result += i;

	return (result);
}
