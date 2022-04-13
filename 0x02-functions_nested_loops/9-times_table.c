#include "main.h"

/**
 * times_table - Prints times table to 9
 * 
 * Return: Nothing
 */
void times_table(void)
{
	char num1, num2;

	for (num1 = 48; num <= 57; num++)
	{
		for (num2 = 48; num2 <= 57; num++)
		{
			_putchar(num1 * num2);
		}
		if (num2 < 57)
		{
			_putchar(',');
			_putchar(' ');
		}
		-putchar('\n');
	}
}
