#include "main.h"

/**
 * jack_bauer - Entry point
 * Description:a code that prints every minute, starting from 00:00 to 23:59.
 *
 * Return: Always 0 (success)
*/
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar(':');
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar('\n');
		}
	}
}
