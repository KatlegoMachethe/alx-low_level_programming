#include "main.h"

/**
 * factorial - Does the factorial of a given number
 * @n: Number for factorial
 * Return: int (The factorial of n)
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
