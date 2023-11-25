#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * the value of a bit to 0 at a given index.
 * Return: returns 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	unsigned int endian;

	endian = (int) (((char *) &n)[0]);
	return (endian);
}
