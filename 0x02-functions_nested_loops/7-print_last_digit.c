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
	
	_putchar(last);
	return (last);
}
