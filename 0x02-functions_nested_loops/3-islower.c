#include "main.h"

/**
 * _islower - Entry point
 * @c: an integer parameter.
 *
 * Return: Always 0 (success)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
