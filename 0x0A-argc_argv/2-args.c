#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: counts the arguments
 * @argv: argument vector
 * Return: Always 0 (successs)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
