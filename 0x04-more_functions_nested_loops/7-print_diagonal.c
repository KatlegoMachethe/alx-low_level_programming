#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Prints a diagonal line
 * @n: First integer argument
 * Return: void
 */

void print_diagonal(int n)
{
	int count, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			for (space = 0; space < count; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
