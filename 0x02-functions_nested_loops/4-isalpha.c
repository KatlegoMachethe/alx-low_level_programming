#include "main.h"

/**
 * _isalpha - Checks for lowercase, upercase and letters
 * @c - First argument
 *
 * Return: 1 for success, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (sizeof(c) > 1))
		return (1);
	else
		return (0);
}
