#include "main.h"

/**
 * *rot13 -a function that encodes a string using rot13.
 * @a: pointer to the string we are converting
 *
 * Return: On success 1.
 */
char *rot13(char *a)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_repl[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = a;

	while (*a)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*a == rot13[i])
			{
				*a = rot13_repl[i];
				break;
			}
		}
		a++;
	}
	return (ptr);
}
