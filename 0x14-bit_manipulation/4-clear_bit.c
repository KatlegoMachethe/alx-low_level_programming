#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer to unsigned long int
 * @index: index to change bit at
 *
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
