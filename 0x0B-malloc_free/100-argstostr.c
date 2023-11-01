#include "main.h"

/**
 * *argstostr - a function that concatenates
 * all the arguments of your program.
 * @ac: argument counter
 * @av: argument vector
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, m = 0;
	char *strn;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			m++;
			j++;
		}
		j = 0;
		i++;
	}
	strn = malloc((sizeof(char) * m) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			strn[k] = av[i][j];
			k++;
			j++;
		}
		strn[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	strn[k] = '\0';
	return (strn);
}
