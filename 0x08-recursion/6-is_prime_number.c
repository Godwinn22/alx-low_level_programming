#include "main.h"

/**
 * is_prime_number - a function that returns
 * 1 if the input integer is aprime number, otherwise return 0.
 * @n: The number
 * Return: returns the square root of n
*/
int is_prime_number(int n)
{
	return (prime_check(n, 1));
}

/**
 * prime_check - a function that checks if the number n is a prime.
 * @n: The number
 * @j: use to traverse over the function
 * Return: returns teh prime check
*/
int prime_check(int n, int j)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % j == 0 && j > 1)
	{
		return (0);
	}
	else if ((n / j) < j)
	{
		return (1);
	}
	else
	{
		return (prime_check(n, j + 1));
	}
}
