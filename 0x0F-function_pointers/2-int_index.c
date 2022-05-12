#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array of integers to search from
 * @size: # of elements in the array
 * @cmp: pointer to function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
