#include "main.h"

/**
 * print_diagonal - a function that draws a straight line in the terminal.
 * @n: the parameter we use in checking the i
 *
 * Return: Always 0 (success)
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;
		int b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
