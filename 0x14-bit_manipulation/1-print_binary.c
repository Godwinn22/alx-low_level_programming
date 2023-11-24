#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: pointer to a character array or string that represents a binary number
 *
 * Description: You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;

	if (n == 0)
	{
		printf("0\n");
		return;
	}
	while (n > 0)
	{
		if ((n & 1))
			printf("1");
		else
			printf("0");
		n = n >> 1;
		i++;
	}
	printf("\n");
}
