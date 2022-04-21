#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: First integer argument
 * @n: Number of elements in the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
