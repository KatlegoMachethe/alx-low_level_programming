#include "main.h"

/**
 * find_the_root - Finds the roots of the number
 * @i: The number we want to find the root of
 * @root: the root
 * Return: The root
 */

int find_the_root(int i, int root)
{
	if (root * root > i)
	{
		return (-1);
	}
	else if (root * root == i)
	{
		return (root);
	}
	else
	{
		return (find_the_root(i, root + 1));
	}
}

/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: integer to return square roor of
 * Return: integer (square root of n)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_the_root(n, 0));
}
