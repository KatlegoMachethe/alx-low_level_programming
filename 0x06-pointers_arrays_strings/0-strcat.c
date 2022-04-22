#include "main.h"

/**
 * _strlen - get the lemgth of a string
 * @s: a string
 * Return; integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcat - Concatenates two strings
 * @src: First string input
 * @dest: Second string input
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int src_len;

	for (dest_len = 0; dest_len < _strlen(dest); dest_len++)
	{
		_putchar(dest[dest_len]);
	}
	_putchar(' ');
	for (src_len = 0; src_len < _strlen(src); src_len++)
	{
		_putchar(src[src_len]);
	}
	src[src_len] = '\0';
	return (dest, src);
}
