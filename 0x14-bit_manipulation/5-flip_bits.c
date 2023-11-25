#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another. a function that sets
 * the value of a bit to 0 at a given index.
 * @n: pointer to a character array or string that represents a binary number
 * @m: is the index
 * Return: returns the value of he flipped bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int output;

	output = n ^ m;
	while (output > 0)
	{
		if ((output & 1) == 1)
			count++;
		output >>= 1;
	}
	return (count);
}
