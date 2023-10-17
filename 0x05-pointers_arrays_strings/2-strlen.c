#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the variable that contains our string
 *
 * Return: returning the value of count.
*/
int _strlen(char *s)
{
	int i;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
