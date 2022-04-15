#include "main.h"

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
	else
	{
		return (0);
	}
}
