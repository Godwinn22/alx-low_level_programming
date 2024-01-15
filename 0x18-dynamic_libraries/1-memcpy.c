#include "main.h"

/**
 * *_memcpy - a function that copies memory area.
 * @dest: the destinationation to copy.
 * @src: the source to copy from.
 * @n: number of times
 * Return: The value of  char dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
