#include "main.h"

/**
 * _isdigit - program that checks if it is an uppercase letter
 * @c: the variable we are using to check
 * Return: 1 if it is, and 0 if it is not
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
