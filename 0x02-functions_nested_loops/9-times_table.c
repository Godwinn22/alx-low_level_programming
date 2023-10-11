#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (success)
*/
void times_table(void)
{
	int a, b, multiplier;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 0; b <= 9; b++)
		{
			multiplier = a * b;
			if ((multiplier / 10) > 0)
			{
				_putchar((multiplier / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((multiplier % 10) + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
