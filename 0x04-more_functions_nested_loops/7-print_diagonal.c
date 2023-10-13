#include "main.h"

/**
 * print_diagonal - a function that draws a straight line in the terminal.
 * @n: the parameter we use in checking the i
 *
 * Return: Always 0 (success)
*/
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
