#include "main.h"

/**
 * puts_half -a function that prints half of a string, followed by a new line.
 * @str: the variable that contains our string
 *
 * Return: returning the value of count.
*/
void puts_half(char *str)
{
	int i, counter, half_length;

	counter = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	if (counter % 2 == 0)
	{
		half_length = counter / 2;
		for (i = half_length; i < counter; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		half_length = ((counter - 1) / 2);
		for (i = counter - half_length; i < counter; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
