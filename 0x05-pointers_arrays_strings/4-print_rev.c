#include "main.h"

/**
 * print_rev -a function that prints a string, in reverse,
 * followed by a new line.
 * @s: the variable that contains our string
 *
 * Return: returning the value of count.
*/
void print_rev(char *s)
{
	int i, counter;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		/* code to get the length first */
		counter++;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		/* printing the characters in reverse */
		_putchar(s[i]);
	}
	_putchar('\n');
}
