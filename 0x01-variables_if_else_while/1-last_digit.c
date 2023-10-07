#include <stdlib.h>
#include <time.h>
/* more haeders goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point.
 *
 * Return: 0 Always(Successful)
*/
int main(void)
{
	int n;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	mod = n % 10;

	if (mod > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	else if (mod == 0)
		printf("Last digit of %d is %d and is 0\n", n, mod);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	return (0);
}
