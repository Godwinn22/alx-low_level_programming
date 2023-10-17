#include "main.h"

/**
 * rev_string -a function that prints a string, in reverse,
 * followed by a new line.
 * @s: the variable that contains our string
 *
 * Return: returning the value of count.
*/
void rev_string(char *s)
{
	int i, swapper, counter;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (i = 0; i < counter / 2; i++)
	{
		/**
		 * we will now swap the current value
		 * of i and store it in a variable.
		*/
		swapper = s[i];
		/*swapping the first value of arr with the last value*/
		s[i] = s[counter - 1 - i];
		/*swapping the last value of arr with the first value*/
		s[counter - 1 - i] = swapper;
	}
}
