#include "main.h"

/**
 * _strcpt - Copying a string
 * @src: Original string
 * @dest: Copy of the string
 * Return: Char
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] <= '\0'; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
