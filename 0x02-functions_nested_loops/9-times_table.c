#include "main.h"

/**
 * times_table - Entry point
 * Description:a code that prints every minute, starting from 00:00 to 23:59.
 *
 * Return: Always 0 (success)
*/
void times_table(void)
{
	int a;
	int b;
	int multiplier;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			multiplier = a * b;
			if (multiplier <= 9)
			{
				_putchar(multiplier + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((multiplier / 10) + '0');
				_putchar((multiplier % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
