#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: pointer to a character array or string that represents a binary number
 * @index: is the index
 * Return: returns 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_mask;
	
	if (index > 8 * sizeof(unsigned int))
		return (-1);
	bit_mask = 1;
	bit_mask <<= index;
	*n = ((*n) | bit_mask);
	return (1);
}
