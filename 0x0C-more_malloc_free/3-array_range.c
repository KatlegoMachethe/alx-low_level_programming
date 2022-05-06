#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of intgers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to array of integers
 */

int *array_range(int min, int max)
{
	int i, diff, *array;

	if (min > max)
	{
		return (NULL);
	}
	diff = max - min;
	array = malloc(sizeof(int) * diff + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= diff; i++)
	{
		array[i] = min++;
	}
	return (array);
}
