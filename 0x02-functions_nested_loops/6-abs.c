#include "main.h"

/**
 * _abs - Computed absolute value of integer
 * @int: Integer argument
 *
 * Return: Integer value
 */
int _abs(int n)
{
	if (n < 1)
		n = (-1) * n;
	return (n);
}
