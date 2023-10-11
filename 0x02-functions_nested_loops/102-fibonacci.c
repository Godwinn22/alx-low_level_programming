#include <stdio.h>

/**
 * main - A function that prints the first 50 fibonacci numbers
 * starting from 1 and 2.
 * 
 * Return: Always 0 (success)
*/
int main(void)
{
	//using the unsigned long so as to accomodate positive large numbers
	unsigned long int fibona_num1 = 1;
	unsigned long int fibona_num2 = 2;
	unsigned long int fibona_nums;
	int i;

	printf("%lu, ", fibona_num1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", fibona_num2);
		fibona_nums = fibona_num1 + fibona_num2;
		fibona_num1 = fibona_num2;
		fibona_num2 = fibona_nums;
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}