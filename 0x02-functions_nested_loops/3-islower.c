#include "main.h"

/**
 * _islower - Checks for case
 * @c: First argument/operand
 * Return: 1 for success, otherwise 0
 */
int _islower(int c)
{
	char ch = '0' + c;

	if (ch >= 'A' && ch <= 'Z')
		return (0);
	else if (ch >= 'a' && ch <= 'z')
		return (1);
}
