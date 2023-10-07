#include <stdio.h>

/**
 * main - Entry point
 * Description:'code that prints all single numbers of base10 starting from 0'
 * Return: Always 0 (success)
*/
int main(void)
{
	int hex_vals_nums = 0;
	char hex_vals_alphas = 'a';

	while (hex_vals_nums < 10)
	{
		putchar(hex_vals_nums + '0');
		hex_vals_nums++;
	}
	while (hex_vals_alphas < 'g')
	{
		putchar(hex_vals_alphas);
		hex_vals_alphas++;
	}
	putchar('\n');
	return (0);
}
