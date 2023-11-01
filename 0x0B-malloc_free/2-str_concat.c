#include "main.h"

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
*/
char *str_concat(char *s1, char *s2)
{
	char *strn_concat;
	int i;
	int s1_len = 0;
	int s2_len = 0;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;
	strn_concat = malloc(1 + (s1_len + s2_len) * sizeof(char));
	if (strn_concat == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			strn_concat[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			strn_concat[s1_len + i] = s2[i];
	}
	return (strn_concat);
}
