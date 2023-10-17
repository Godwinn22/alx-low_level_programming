#include "main.h"

/**
 * *_strcpy - a function that prints n elements
 * of an array of integers, followed by a new line.
 * @dest: a pointer to our array
 * @src: size of array
 *
 * Return: returning the value of count.
*/
char *_strcpy(char *dest, char *src)
{
	int i, counter;

	counter = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		counter++;
	}
	for (i = 0; i <= counter; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
