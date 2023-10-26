#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: The number
 * Return: returns 1 if a number is a palindrome, and 0
 * if it is not a palindrome.
*/
int is_palindrome(char *s)
{
	if (*s != '\0')
	{
		return (diff(s, 0, strn_len(s) - 1));
	}
	else
	{
		return (1);
	}
}

/**
 * strn_len - a function that gets the length  of the string.
 * @s: The string we are checking for.
 * Return: returns the length of the string.
*/
int strn_len(char *s)
{
	if (*s != '\0')
	{
		return (1 + strn_len(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * diff - finds the difference between the two
 * @s: The string
 * @strn1: the first string
 * @strn2: the second string
 * Return: returns teh prime check
*/
int diff(char *s, int strn1, int strn2)
{
	if (*(s + strn1) == *(s + strn2))
	{
		if (strn1 == strn2 || strn1 == strn2 + 1)
		{
			return (1);
		}
		else
		{
			return (0 + diff(s, strn1 + 1, strn2 - 1));
		}
	}
	else
	{
		return (0);
	}
}
