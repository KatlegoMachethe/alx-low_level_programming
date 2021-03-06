#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: First input
 * @src: Second input
 * @n: number of times the string is copies
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
