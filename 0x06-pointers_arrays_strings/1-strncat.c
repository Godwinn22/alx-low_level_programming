#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: the first pointer to a character
 * @src: the second pointer to a character
 *
 * Return: On success 1.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
