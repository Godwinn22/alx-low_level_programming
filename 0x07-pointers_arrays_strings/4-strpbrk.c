#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string we search from.
 * @accept: the string of bytes
 * Return: a pointer to the byte in s.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
