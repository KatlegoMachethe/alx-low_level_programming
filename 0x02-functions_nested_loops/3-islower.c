#include "main.h"

/**
 * _islower - Checks for case
 * @c: First argument/operand
 * Return: 1 for success, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
