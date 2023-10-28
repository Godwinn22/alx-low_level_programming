#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: counts the arguments
 * @argv: argument vector
 * Return: Always 0 (successs)
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
