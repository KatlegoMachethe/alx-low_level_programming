#include "main.h"

/**
 * _pow_recursion - Prints the value of x raised to the power of y
 * @x: First integer input
 * @y: Second integer input
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
