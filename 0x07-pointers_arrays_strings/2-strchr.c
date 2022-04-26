#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: Input string
 * @c: The character we are searching in string s
 * Return: poimter to s for first occurance, NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	return ((*s == c) ? (char *) s : 0);
}
