#include <stdio.h>

/**
 * main - Entry point
 * Description:'code that prints all single numbers of base10 starting from 0'
 * Return: Always 0 (success)
*/
int main(void)
{
	int first_combo;

	first_combo = 48;
	while (first_combo <= 57)
	{
		putchar(first_combo);
		if (first_combo < 57)
		{
		putchar(',');
		putchar(' ');
		}
		first_combo++;
	}
	putchar('\n');
	return (0);
}
