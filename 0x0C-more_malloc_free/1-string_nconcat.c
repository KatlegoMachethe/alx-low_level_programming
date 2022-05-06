#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @str: string to get the length of
 * Return: length of str
 */

unsigned int _strlen(char *str)
{
	unsigned int lenght;

	while (str[length] != '\0')
	{
		lenght++;
	}
	return (length);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string argument
 * @s2: 2nd string argument
 * @n: unsigned integer argument
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= _strlen(s2))
	{
		n = _strlen(s2);
	}
	new_str = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _strlen(s1); i++)
	{
		new_str[i] = s1[i];
	}
	for (; i < _strlen(s1) + n; i++)
	{
		new_str[i] = s2[i - _strlen(s1)];
	}
	new_str[i] = '\0';
	return (new_str);
}
