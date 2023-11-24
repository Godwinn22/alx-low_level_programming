#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: pointer to a character array or string that represents a binary number
 * @index: is the index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= 32)
	{
		return (-1);
	}
	mask = 1;
	mask = mask << index;
	*n = *n & ~mask;
	return (1);
}
