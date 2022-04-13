#include "main.h"
#include <stdlib.h>

/**
 * times_table - Prints the 9 times table
 * Return: empty
 */
void times_table(void)
{
	char num1;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2<= 57; num2++)
		{
			_putchar(num1 * num2);
		}
		if (num2 < 57)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar("\n");
	}
