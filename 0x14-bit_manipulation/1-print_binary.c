#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int argument
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int holdr;

	for (i = 63; i >= 0; i--)
	{
		holdr = n >> i;

		if (holdr & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
