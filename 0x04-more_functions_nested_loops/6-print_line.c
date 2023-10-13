#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: the parameter we use in checking the i
 *
 * Return: Always 0 (success)
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
