#include "main.h"

/**
 * _abs - Entry point
 * @a: an integer parameter.
 *
 * Return: Always 0 (success)
*/
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
