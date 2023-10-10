#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		int b;

		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
