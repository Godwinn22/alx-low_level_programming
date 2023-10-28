#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string we search from.
 * @accept: the character we are looking for.
 * Return: The value of  char c
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int bytes = 0;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}
		}
	}
	return (bytes);
}
