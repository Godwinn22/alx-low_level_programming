#include <stdio.h>

/**
 * main - Entry point
 * Description:'code that prints all single numbers of base10 starting from 0'
 * Return: Always 0 (success)
*/
int main(void)
{
	int first_strip;
	int sec_strip;

	first_strip = 48;
	sec_strip = 48;

	while (first_strip <= 57)
	{
		while (sec_strip <= 57)
		{
			if (first_strip < sec_strip)
			{
				putchar(first_strip);
				putchar(sec_strip);
				if (first_strip == 56 && sec_strip == 57)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			sec_strip++;
		}
		sec_strip = 48;
		first_strip++;
	}
	return (0);
}
