#include "main.h"

/**
 * _abs - Entry point
 * @a: an integer parameter.
 *
 * Return: Always 0 (success)
*/
int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		a = -a;
	}
	b = a % 10;
	if (b < 0)
	{
		b = -b;
	}
	_putchar(b + '0');
	return (b);
}
