#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a line on the terminal
 * @n: First integer argument
 * Return: void
 */

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
