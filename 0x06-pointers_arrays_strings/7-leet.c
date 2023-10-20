#include "main.h"

/**
 * *leet -a function that encodes a string into 1337.
 * @a: pointer to the string we are converting
 *
 * Return: On success 1.
 */
char *leet(char *a)
{
	int i;
	char leet_chars[128];

	leet_chars['a'] = leet_chars['A'] = 52;
	leet_chars['e'] = leet_chars['E'] = 51;
	leet_chars['o'] = leet_chars['O'] = 48;
	leet_chars['t'] = leet_chars['T'] = 55;
	leet_chars['l'] = leet_chars['L'] = 49;

	for (i = 0; a[i]; i++)
	{
		int a_repl = a[i];

		if (leet_chars[a_repl])
		{
			a[i] = leet_chars[a_repl];
		}
	}
	return (a);
}
