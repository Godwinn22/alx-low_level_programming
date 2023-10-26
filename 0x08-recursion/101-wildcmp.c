#include "main.h"

/**
 * wildcmp - a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * is a palindrome and 0 if not.
 * @s1: first string
 * @s2: second string
 * Return: returns 1 if the strings can be considered identical
 * otherwise returns 0.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == 42 && *(s2 + 1) != '\0')
	{
		return (0);
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == 42)
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
