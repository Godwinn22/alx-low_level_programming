#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: the first pointer to a character
 * @src: the second pointer to a character
 *
 * Return: On success 1.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = 0;
	int src_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		src_len++;
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + src_len] = '\0';
	return (dest);
}
