#include "main.h"

/**
 * get_prime - recursively devides by the highest devisor
 * @n: input number
 * @dev: devisor
 * Return: 1 if prime, otherwise 0.
 */

int get_prime(int n, int dev)
{
	if (n == dev)
	{
		return (1);
	}
	else if (n % dev == 0)
	{
		return (0);
	}
	else
	{
		return (get_prime(n, dev + 1));
	}
}

/**
 * is_prime_number - Checks whether a number is a prime number or not
 * @n: Number to check
 * Return: 1 is # is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (get_prime(n, 2));
	}
}
