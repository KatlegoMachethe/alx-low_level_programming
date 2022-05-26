#include "main.h"

/**
 * flip_bits - finds out # of bit bits to flip from one # to another
 * @n: unsigned long int argument
 * @m: unsigned long int argument
 *
 * Return: #number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int holdr, this = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		holdr = this >> i;
		if (holdr & 1)
		{
			j++;
		}
	}
	return (j);
}
