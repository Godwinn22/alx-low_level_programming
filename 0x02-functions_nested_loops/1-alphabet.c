#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (success)
*/
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
