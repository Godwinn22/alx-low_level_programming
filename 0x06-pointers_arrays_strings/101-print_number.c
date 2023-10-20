#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: pointer to the string we are converting
 *
 * Return: On success 1.
 */
void print_number(int n)
{
	unsigned int n2;

	n2 = n;
	if (n < 0)
	{
		_putchar('-');
		n2 = -n;
	}
	if ((n2 / 10) != 0)
	{
		print_number(n2 / 10);
	}
	_putchar((n2 % 10) + '0');
}
