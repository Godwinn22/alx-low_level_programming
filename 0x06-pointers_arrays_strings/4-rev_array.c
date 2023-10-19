#include "main.h"

/**
 * reverse_array - a function that compares two strings.
 * @a: pointer to the array we are reversing
 * @n: the number of times
 *
 * Return: On success 1.
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
