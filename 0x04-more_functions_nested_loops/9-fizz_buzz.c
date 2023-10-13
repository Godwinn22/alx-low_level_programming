#include <stdio.h>

/**
 * main - Entry point
 * Description: The “Fizz-Buzz test” is an interview question designed to
 * help filter out the 99.5% of programming job candidates
 * who can’t seem to program their
 * way out of a wet paper bag. Write a program that prints the numbers from
 * 1 to 100, followed by a new line. But for multiples of three print
 * Fizz instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Each number or word should be separated by a space.
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;
	int limit = 100;

	for (i = 1; i <= limit; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
