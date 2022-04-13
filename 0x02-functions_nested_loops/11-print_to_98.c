#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - Prints all natural number from n to 98
 * @n: Integer argument (starting point of counting)
 *
 * Return: Returns absolutely nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d", n);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
			{
				_putchar("%d", n);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
