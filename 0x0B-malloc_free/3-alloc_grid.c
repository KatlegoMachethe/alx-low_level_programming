#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2Dimensional array of integers
 * @width: first intger input
 * @height: second integer input
 * Return: a pointer to integer
 */

int **alloc_grid(int width, int height)
{
	int **str;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	str = malloc(height * sizeof(int *));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		str[i] = malloc(width * sizeof(int));
		if (str[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(str[i]);
			}
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
