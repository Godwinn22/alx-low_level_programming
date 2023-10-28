#include "main.h"

/**
 * _atoi - a function that prints n elements
 * of an array of integers, followed by a new line.
 * @s: a pointer to our array
 *
 * Return: returning the value of count.
*/
int _atoi(char *s)
{
	int digit;
	int result = 0;
	/* 1 for positive, -1 for negative */
	int sign = 1;
	int i;

	for (i = 0; s[i] == ' ' || s[i] == '-' || s[i] == '+'; i++)
	{
		if (s[i] == '-')
			sign = -sign;
	}
	/* iterating through the remaining chars and then convert to int*/
	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
	{
		digit = s[i] - '0';
		/*checking for integer overflow before adding new digit*/
		if (result > (2147483647 - digit) / 10)
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483647);
		}
		result = result * 10 + digit;
	}
	return (result * sign);
}
