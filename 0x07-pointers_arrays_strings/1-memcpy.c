#include "main.h"

/**
 * _memcpy - Copies memory areas
 * @dest: Destination
 * @src: what we are copying from
 * @n: number of bytes yo be coped
 * Return: char (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src;
	}
	return (dest);
}
