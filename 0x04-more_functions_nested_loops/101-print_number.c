#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: the parameter we use in checking the i
 *
 * Return: Always 0 (success)
*/
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
