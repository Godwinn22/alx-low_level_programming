#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: counts the arguments
 * @argv: argument vector
 * Return: Always 0 (successs)
*/
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
	}
	for (; cents > 0;)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
