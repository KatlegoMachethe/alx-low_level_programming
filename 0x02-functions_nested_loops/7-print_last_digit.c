#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: Interger argument
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;
	
	if (last < 0)
	{
		last = -last;
		_putchar(last + '0');
	}
	return (last);
}
