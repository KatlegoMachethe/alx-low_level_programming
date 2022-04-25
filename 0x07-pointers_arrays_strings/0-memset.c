#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: First memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: char (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
