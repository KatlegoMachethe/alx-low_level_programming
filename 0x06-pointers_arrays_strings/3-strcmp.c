#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to 1st string
 * @s2: Pointer to 2nd string
 * Return: Integer
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}
