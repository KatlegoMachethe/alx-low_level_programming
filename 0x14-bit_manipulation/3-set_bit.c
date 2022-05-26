#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at givem index
 * @n: pointer unsigned long int
 * @index: index to change
 *
 * Return: integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index | *n));
	return (1);
}
