#include <stdio.h>

/**
 * main - Entry point
 * Description:'code that prints all single numbers of base10 starting from 0'
 * Return: Always 0 (success)
*/
int main(void)
{
	char lower_alphas;

	lower_alphas = 'z';
	while(lower_alphas >= 'a')
	{
		putchar(lower_alphas);
		lower_alphas--;
	}
	putchar('\n');
	return(0);
}
