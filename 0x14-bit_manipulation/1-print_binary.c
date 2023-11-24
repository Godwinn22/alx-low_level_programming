#include "main.h"

/**
 * print_bi_recus - printing the binary recursively
 * @n: the digit
 * Return: void
 */
void print_bi_recus(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi_recus(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: pointer to a character array or string that represents a binary number\
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_bi_recus(n);
}
