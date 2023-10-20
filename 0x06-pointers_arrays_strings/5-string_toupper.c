#include "main.h"

/**
 * *string_toupper - a function that converts a
 * string from lowercase to uppercase.
 * @a: pointer to the string we are converting
 *
 * Return: On success 1.
 */
char *string_toupper(char *a)
{
	int i;
	int string_len = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[string_len] >= 'a' && a[string_len] <= 'z')
		{
			a[string_len] -= ' ';
		}
		string_len++;
	}
	return (a);
}
