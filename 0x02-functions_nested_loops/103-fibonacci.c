#include <stdio.h>

/**
 * main - A function that prints the first 50 fibonacci numbers
 * starting from 1 and 2.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	/* using the unsigned long so as to accomodate positive large numbers */
	unsigned long int fibona_num1 = 1;
	unsigned long int fibona_num2 = 2;
	unsigned long int fibona_nums;
	int sum_of_fibonacci = 2;

	for (; fibona_nums <= 4000000; fibona_nums++)
	{
		fibona_nums = fibona_num1 + fibona_num2;
		if (fibona_nums % 2 == 0)
		{
			sum_of_fibonacci += fibona_nums;
		}
		fibona_num1 = fibona_num2;
		fibona_num2 = fibona_nums;
	}
	printf("%d\n", sum_of_fibonacci);
	return (0);
}
