#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: where the variable will be copied to.
 * @b: the variable to copy
 * @n: number of times
 * Return: The value of  char s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
