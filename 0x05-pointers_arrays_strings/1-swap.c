#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the varialble a
 * @b: the varialble b
*/
void swap_int(int *a, int *b)
{
	int temp_a = *a;
	*a = *b;
	*b = temp_a;
}
