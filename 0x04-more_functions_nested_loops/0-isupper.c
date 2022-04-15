#include "main.h"
#include <stdio.h>

/**
 * main - Checks for uppercase characters
 * @c: Integer argument
 * Return: 1 for uppercase characters, otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
