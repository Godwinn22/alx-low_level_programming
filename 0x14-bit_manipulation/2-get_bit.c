#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: pointer to a character array or string that represents a binary number
 * @index: is the index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;

	mask <<= index;
	return ((n & mask) >> index);
}
