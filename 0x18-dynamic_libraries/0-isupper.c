#include "main.h"

/**
 * _isupper - program that checks if it is an uppercase letter
 * @c: the variable we are using to check
 * Return: 1 if it is, and 0 if it is not
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
