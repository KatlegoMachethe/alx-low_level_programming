#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints number excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2 || number != 4)
		{
			_putchar(number + '0');
		}
	}
	_putchar('\n');
}

