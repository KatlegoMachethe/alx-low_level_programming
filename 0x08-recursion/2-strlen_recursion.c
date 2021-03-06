#include "main.h"

/**
 * _strlen_recursion - Prints length of a string
 * @s: input string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(++s) + 1);
}
