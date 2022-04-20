#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: String argument
 * Return: Integer
 */

int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
