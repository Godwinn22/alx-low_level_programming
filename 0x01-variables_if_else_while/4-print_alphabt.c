#include <stdio.h>

/**
 * main - Entry point
 * Description: "a program that prints the alphabet in lowercase"
 * Return: ALways 0 (Success)
*/
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		if (alphabets != 'q' && alphabets != 'e')
		{
			putchar(alphabets);
		}
		alphabets++;
	}
	putchar('\n');
	return (0);
}
