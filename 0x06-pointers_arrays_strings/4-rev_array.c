#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Pointer to an integer
 * @n: Integer input
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int index, iter, hold;

	index = 0;
	iter = n - 1;
	while (index < iter)
	{
		hold = a[index];
		a[index] = a[iter];
		a[iter] = hold;
		index++;
		iter--;
	}
}
