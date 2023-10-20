#include "main.h"

/**
 * *cap_string - Write a function that capitalizes all words of a string.
 * @a: pointer to the string we are converting
 *
 * Return: On success 1.
 */
char *cap_string(char *a)
{
	int i;
	int counter = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[0] >= 'a' && a[0] <= 'z')
		{
			a[0] -= ' ';
		}
		if (a[counter] == ',' || a[counter] == ';' ||
		a[counter] == '.' || a[counter] == '!' || a[counter] == '?'
		|| a[counter] == '"' || a[counter] == '(' ||
		a[counter] == ')' || a[counter] == '{' || a[counter] == '}'
		|| a[counter] == '\t' || a[counter] == '\n' ||
		a[counter] == ' ')
		{
			if (a[counter + 1] >= 'a' && a[counter + 1] <= 'z')
			{
				a[counter + 1] -= ' ';
			}
		}
		counter++;
	}
	return (a);
}
