#include <stdio.h>

/**
 * main -Entry point
 * Description :A code that prints the prime factors of the number
 * 612852475143, followed by a new line.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	unsigned long int i;
	unsigned long int n;

	n = 612852475143;
	for (i = 3; i < 782849; i += 2)
	{
		if ((n % i == 0) && (n != i))
		{
			n /= i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
