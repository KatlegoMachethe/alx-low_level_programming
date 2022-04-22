#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Pointer to an integer
 * @n: Integer input
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i => 0)
	{
		putchar(a[i]);
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		i--;
	}
	_putchar('\n');
}
