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
	int i = 0, j = 1, k = 0;
	unsigned int n = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			j *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			k = 1;
			n = (n * 10) + (s[i] - '0');
			i++;
		}
		if (k == 1)
		{
			break;
		}
		i++;
	}
	n *= j;
	return (n);
}
