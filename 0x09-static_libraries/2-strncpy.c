#include "main.h"

/**
 * *_strncpy - a function that concatenates two strings.
 * @dest: the first pointer to a character
 * @src: the second pointer to a character
 * @n: the amount of times to print
 *
 * Return: On success 1.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
