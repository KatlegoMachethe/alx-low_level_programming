#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string to the standard output
 * @str: First string input
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++
	}
	_putchar('\n');
}
