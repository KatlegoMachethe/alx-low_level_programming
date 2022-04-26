#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String input
 * @accept: substring
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (count);
			}
		}
	}
	return (count);
}
