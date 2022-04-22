#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: First input
 * @src: Second input
 * @n: number of times the string is copies
 * Return: 
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	
	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = dest[i];
		}
	}
	dest[i] = '\0';
	return (dest);
}
