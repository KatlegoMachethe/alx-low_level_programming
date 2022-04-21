#include "main.h"

/**
 * puts2 - Prints character then jump one and prints anothe
 * @str: String input
 * Return: voidd
 */

void puts2(char *str)
{
	int iter = 0;

	while (s[iter] != '\0')
	{
		if (iter % 2 == 0)
		{
			_putchar(s[iter]);
		}
		iter++;
	}
	_putchar('\n');
}
