#include "main.h"

/**
 * *_strstr - a function that locates a substring.
 * @haystack: the string we search from.
 * @needle: the string to be searched for
 * Return: a pointer to the byte in s.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	for (; *haystack; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
		}
	}
	return ('\0');
}
