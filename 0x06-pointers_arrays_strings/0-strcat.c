#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: First string input
 * @dest: Second string input
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2;
	
	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	for (len2 = 0; str[len2] != '\0'; len2++)
	{
		dest[len1] = src[len2];
		len1++
	}
	dest[len1] = '\0';
	return (dest);
}
