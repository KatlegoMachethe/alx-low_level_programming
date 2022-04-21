#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string to the standard output
 * @str: First string input
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
