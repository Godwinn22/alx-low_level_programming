#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: pointer to a character array or string that represents a binary number
 *
 * Description: You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;

	while (!(n & (1UL << shift)) && shift > 0)
	{
		shift--;
	}
	for (; shift >= 0; shift--)
	{
		_putchar((n & (1UL << shift)) ? '1' : '0');
	}

	_putchar('\n');
}
