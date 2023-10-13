#include "main.h"

/**
 * print_square -a function that that prints a square, followed by a new line.
 * @size: the parameter we use in checking the i
 *
 * Return: Always 0 (success)
*/
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
