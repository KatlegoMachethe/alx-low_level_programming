#include "main.h"

/**
 * print_sign - Check is number is positive or not
 * @n: Integer argument
 *
 * Return: 1 for +, 0 for zero and -1 for -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
