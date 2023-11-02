#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 * Return: returned pointer shall point to a newly allocated
 * space in memory, which contains s1, followed by the first
 * n bytes of s2, and null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int i;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;

	result = malloc((s1_len + n) * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= s2_len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			result[s1_len + i] = s2[i];
		result[s1_len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; i < n; i++)
			result[s1_len + i] = s2[i];
		result[s1_len + i] = '\0';
	}
	return (result);
}
