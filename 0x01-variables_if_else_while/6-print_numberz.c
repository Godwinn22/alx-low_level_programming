#include <stdio.h>

/**
 * main - Entry point
 * Description:'code that prints all single numbers of base10 starting from 0'
 * Return: Always 0 (success)
*/
int main(void)
{
	int single_digits;

	single_digits = 0;
	while (single_digits < 10)
	{
		putchar(single_digits + '0');
		single_digits++;
	}
	putchar('\n');
	return (0);
}
