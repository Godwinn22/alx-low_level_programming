#include <stdio.h>

/**
 * main - Entry point
 * Description:'code that prints all combinations of two two-digit numbers.'
 * Return: Always 0 (success)
*/
int main(void)
{
	int first_strip;
	int sec_strip;

	for (first_strip = 0; first_strip <= 99; first_strip++)
	{
		for (sec_strip = 0; sec_strip <= 99; sec_strip++)
		{
			if (first_strip < sec_strip && first_strip != sec_strip)
			{
				putchar(48 + (first_strip / 10));
				putchar(48 + (first_strip % 10));
				putchar(' ');
				putchar(48 + (sec_strip / 10));
				putchar(48 + (sec_strip % 10));
				if (first_strip != 98 || sec_strip != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
