#include "main.h"

/**
 * **alloc_grid - a function that returns
 * a pointer to a 2 dimensional array of integers.
 * @width: the columns of the 2d array
 * @height: the rows of the 2d array
 * Return: return NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int **result;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	result = malloc(height * sizeof(int *));

	if (result == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		result[i] = malloc(width * sizeof(int));
		if (result[i] == NULL)
		{
			free(result);
			for (j = 0; j <= height; j++)
			{
				free(result[j]);
			}
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
			{
				result[i][j] = 0;
			}
		}
	}
	return (result);
}
