#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Entry point
 * @n :parameter for the value n
 * Description: a program that prints natural nunbers from n to 98
 *
 * Return: Always 0 (success)
*/
void print_times_table(int n)
{
	int a, b, multiplier;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				multiplier = a * b;
				if (b == 0)
					_putchar(multiplier + '0');
				else if (multiplier < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(multiplier + '0');
				}
				else if (multiplier >= 10 && multiplier < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multiplier / 10) + '0');
					_putchar((multiplier % 10) + '0');
				}
				else if (multiplier >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multiplier / 100) + '0');
					_putchar(((multiplier / 10) % 10) + '0');
					_putchar((multiplier % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
