#include "main.h"

/**
 * print_to_98 - Prints all natural number from n to 98
 * @n: Integer argument (starting point of counting)
 *
 * Return: 
 */
void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		if (n != 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			break;
		}
	}
}
