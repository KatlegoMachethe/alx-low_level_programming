#include "main.h"

/**
 * _strncat - A pointer function concatinating two strings
 * @dest: First string input
 * @src: Second string input
 * @n: integer input
 * Return: New and updated dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	count = 0;
	while (src[count] != src[n])
	{
		dest[index] = src[index];
		count++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
