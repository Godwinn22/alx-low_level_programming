#include "main.h"

/**
 * _print_rev_recursion - a function that prints
 * a string, followed by a new line.
 * @s: string we are to print.
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
