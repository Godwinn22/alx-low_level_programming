#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements
 * of an array of integers, followed by a new line.
 * @a: a pointer to our array
 * @n: size of array
 *
 * Return: returning the value of count.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
