#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square using #
 * @size: Length of the square
 * Return: void
 */

void print_square(int size)
{
	int count, length;

	for (count = 0; count < size; count++)
	{
		for (length = 0; length < size; length++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
