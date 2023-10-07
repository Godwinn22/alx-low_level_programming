#include <stdio.h>

/**
 * main - Entry point
 * Description:'code that prints all different combinations of three digits.'
 * Return: Always 0(success)
*/
int main(void)
{
	int first_strip = 48;
	int sec_strip = 48;
	int third_strip = 48;

	while (first_strip <= 57)
	{
		while (sec_strip <= 57)
		{
			while (third_strip <= 57)
			{
				if (first_strip < sec_strip && sec_strip < third_strip)
				{
					putchar(first_strip);
					putchar(sec_strip);
					putchar(third_strip);
					if (first_strip == 55 && sec_strip == 56 && third_strip == 57)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				third_strip++;
			}
			third_strip = 48;
			sec_strip++;
		}
		sec_strip = 48;
		first_strip++;
	}
	return (0);
}
