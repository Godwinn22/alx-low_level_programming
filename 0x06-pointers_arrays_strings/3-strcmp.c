#include "main.h"

/**
 * *_strcmp - a function that compares two strings.
 * @s1: the first char we are comparing
 * @s2: the second char we are comparing
 *
 * Return: On success 1.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s2[i] > s1[i])
			{
				return (s1[i] - s2[i]);
			}
			else if (s1[1] > s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
