#include "main.h"

/**
 * times_table - Prints times table to 9
 * 
 * Return: Nothing
 */
void times_table(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num++)
		{
			product = num1 * num2;
			if (num1 == 0)
			{
				_putchar(product + '0');
			}
			else if (product >= 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
