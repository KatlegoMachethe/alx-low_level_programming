#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Input string
 * @needle: String to fint in input string
 * Return: Pointer to begining of located string in input string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = i, j = 0; needle[j] != '\0'; j++, k++)
		{
			if (needle[j] != haystack[k] || haystack[k] != '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
