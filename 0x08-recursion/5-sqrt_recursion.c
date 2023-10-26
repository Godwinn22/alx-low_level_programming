#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: The number that we are finding square root for.
 * Return: returns the square root of n
*/
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
/**
 * square_root - a function that calculates the square root of n.
 * @n: The number that we are finding square root for.
 * @sqrt_value: the square root value
 * Return: returns the calculated square root of n
*/

int square_root(int n, int sqrt_value)
{
	if (sqrt_value * sqrt_value == n)
	{
		return (sqrt_value);
	}
	else if (sqrt_value * sqrt_value < n)
	{
		return (square_root(n, sqrt_value + 1));
	}
	else
	{
		return (-1);
	}
}
