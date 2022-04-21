#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String input
 * Return: void
 */

void puts_half(char *str)
{
	int count, half, iter;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count == 0)
	{
		_putchar(str[count]);
	}
	else if (count % 2 != 0)
	{
		half = (count - 1) / 2;
		while (str[half + 2] != '\0')
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		iter = count / 2;
		while (str[iter + 1] != '\0')
		{
			_putchar(str[iter]);
			iter++;
		}
	}
	_putchar('\n');
}
