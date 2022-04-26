#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Input string
 * @accept: String we want a match for
 * Return: Pointer to bytes in s, NULL for nu match
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != 0; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
