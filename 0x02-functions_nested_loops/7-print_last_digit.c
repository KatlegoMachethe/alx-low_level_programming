#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: Interger argument
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
