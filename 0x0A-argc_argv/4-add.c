#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: counts the arguments
 * @argv: argument vector
 * Return: Always 0 (successs)
*/
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
