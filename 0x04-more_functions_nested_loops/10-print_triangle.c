#include "main.h"

/**
 * print_triangle -a function that that prints a triangle,
 * followed by a new line.
 * @size: the parameter we use in checking the i
 *
 * Return: Always 0 (success)
*/
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = size - a; b >= 1; b--)
		{
			_putchar(' ');
		}
		for (c = 0; c < a; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
