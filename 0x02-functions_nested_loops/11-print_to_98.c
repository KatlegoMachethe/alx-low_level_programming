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
	int x = 0;
	
	if (n < 98)
	{
		for (x = n; n <= 98; n++)
		{
			if (n != x)
			{
				_putchar(',');
				_putchar(' ');
			}
			printf("%d", n);

		}
	}
	else
	{
		for (x = n; n >= 98; n--)
		{
			if (n != x)
			{
				_putchar(',');
				_putchar(' ');
			}
			printf("%d", n);
		}
	}
}
