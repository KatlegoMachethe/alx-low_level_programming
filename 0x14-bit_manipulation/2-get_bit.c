#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: unsigned long int argument
 * @index: unsigned int argument
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
	{
		return (-1);
	}
	bit_value = (n >> index) & 1;
	return (bit_value);
}
