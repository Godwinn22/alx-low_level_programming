#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the
 * sum of the two diagonals of a square matrix of integers.
 * @a: pointer to the array
 * @size: size of the array
*/
void print_diagsums(int *a, int size)
{
	int i, diagonal_sum1, diagonal_sum2;

	diagonal_sum1 = 0;
	diagonal_sum2 = 0;
	for (i = 0; i < size; i++)
	{
		diagonal_sum1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		diagonal_sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", diagonal_sum1, diagonal_sum2);
}
