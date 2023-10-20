#include "main.h"

/**
 * *leet -a function that encodes a string into 1337.
 * @a: pointer to the string we are converting
 *
 * Return: On success 1.
 */
char *leet(char *a)
{
	int i, j;

	char leet_chars[] = "aAeEoOtTlL";
	char leet_chars_repl[] = "4433007711";

	int strn_len = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (leet_chars[j] == a[strn_len])
			{
				a[strn_len] = leet_chars_repl[j];
			}
		}
		strn_len++;
	}
	return (a);
}
