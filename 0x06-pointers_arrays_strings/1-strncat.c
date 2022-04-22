#include "main.h"

/**
 * _strncat - A pointer function concatinating two strings
 * @dest: First string input
 * @src: Second string input
 * @n: integer input
 */

char *_strncat(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] != '\0' && index < n; index++)
	{
		dest[index] = src[index];
	}
	for ( ; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
