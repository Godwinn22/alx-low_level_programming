#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the variable that contains our string
 *
 * Return: returning the value of count.
*/
void puts2(char *str)
{
	int i, counter;

	counter = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	for (i = 0; i < counter; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
