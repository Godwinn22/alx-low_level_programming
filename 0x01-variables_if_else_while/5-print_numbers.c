#include <stdio.h>

/**
 * main - Entry point
 * Description:"code that prints all single numbers of base10 starting from 0"
 * Return: Always 0 (Success)
*/
int main(void)
{
	int single_digits;

	single_digits = 0;
	while (single_digits < 10)
	{
		printf("%d", single_digits);
		single_digits++;
	}
	printf("\n");
	return (0);
}
